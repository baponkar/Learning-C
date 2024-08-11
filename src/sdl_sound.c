#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define FREQUENCY 136.1
#define AMPLITUDE 127

void AudioCallback(void* userdata, Uint8* stream, int len) {
    static double phase = 0;
    double sample_rate = 44100.0;  // Standard sample rate

    for (int i = 0; i < len; i++) {
        // Generate a sine wave at the fundamental frequency
        double value = AMPLITUDE * sin(2.0 * PI * FREQUENCY * phase / sample_rate);

        // Normalize to fit into an 8-bit signed integer
        stream[i] = (Uint8)(value + 128);  // 128 to shift the value to the 0-255 range

        phase += 1.0;
        if (phase >= sample_rate) {
            phase -= sample_rate;
        }
    }
}

int main() {
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        fprintf(stderr, "Could not initialize SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_AudioSpec want, have;
    SDL_AudioDeviceID dev;

    SDL_zero(want);
    want.freq = 44100;  // Standard audio frequency
    want.format = AUDIO_U8;  // Unsigned 8-bit format
    want.channels = 1;  // Mono sound
    want.samples = 4096;  // Buffer size
    want.callback = AudioCallback;

    dev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
    if (dev == 0) {
        fprintf(stderr, "Failed to open audio: %s\n", SDL_GetError());
        return 1;
    }

    SDL_PauseAudioDevice(dev, 0);  // Start playing

    printf("Playing Om sound for 5 seconds...\n");
    SDL_Delay(5000);  // Play sound for 5 seconds

    SDL_CloseAudioDevice(dev);
    SDL_Quit();

    return 0;
}
