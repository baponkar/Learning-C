[![Home Static Badge](https://img.shields.io/badge/%F0%9F%8F%A0-Home-maker?style=plastic&labelColor=grey&color=black)
](https://baponkar.github.io/Learning-C)

# 2. Compiler

There are many compilers which convert C programme into executable  binary file which can be run by `./filename.bin` .
1. [Clang](https://clang.llvm.org)
2. [CompCert](https://compcert.inria.fr/index-en.html)
3. [GCC](https://gcc.gnu.org)
4. [PCC](https://web.archive.org/20231212090621/http://pcc.ludd.ltu.se/)
5. [TCC](https://bellard.org/tcc/)
6. [Intel SPMD](https://ispc.github.io)
7. [ccache](https://ccache.dev)

* Online C Compiler [programiz.com](https://www.programiz.com/c-programming/online-compiler/)

### An Overview of GCC and Cross-Platform Installation Guide

![GCC Logo](./image/gcc-logo.png)

The GNU Compiler Collection (GCC) is a versatile and powerful set of compilers for various programming languages, including C, C++, and Fortran. Developed by the Free Software Foundation (FSF), GCC is a cornerstone of open-source software development, providing essential tools for compiling code on a wide range of platforms. This article explores the features of GCC and provides a guide for installing GCC across different operating systems.

#### What is GCC?

GCC, originally known as the GNU C Compiler, has evolved into a comprehensive compiler collection supporting various programming languages. It is renowned for its flexibility, optimization capabilities, and extensive support for different hardware architectures. Key features of GCC include:

- **Multi-language Support:** GCC supports several languages, such as C, C++, Fortran, Ada, Go, and more.
- **Cross-Platform Compatibility:** GCC can be used on various operating systems, including Linux, macOS, and Windows.
- **Optimization:** GCC offers a wide range of optimization options to enhance the performance and efficiency of compiled code.
- **Open Source:** As part of the GNU Project, GCC is free software, with source code available for modification and distribution.

#### Installing GCC on Different Platforms

Installing GCC can vary depending on the operating system. Below are the steps to install GCC on Linux, macOS, and Windows.

##### Installing GCC on Linux

Most Linux distributions come with GCC pre-installed. However, if it is not installed, you can easily install it using the package manager for your distribution.

For Debian-based distributions (e.g., Ubuntu):
```bash
sudo apt update
sudo apt install build-essential
```

For Red Hat-based distributions (e.g., Fedora, CentOS):
```bash
sudo dnf groupinstall "Development Tools"
```

For Arch-based distributions:
```bash
sudo pacman -S base-devel
```

##### Installing GCC on macOS

macOS does not come with GCC pre-installed, but you can install it via Xcode Command Line Tools or Homebrew.

Using Xcode Command Line Tools:
```bash
xcode-select --install
```

Using Homebrew:
First, install Homebrew if you haven't already:
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
Then, install GCC:
```bash
brew install gcc
```

##### Installing GCC on Windows

Windows does not have a native package manager like Linux and macOS, but you can install GCC through MinGW-w64 or Cygwin.

**Using MinGW-w64:**

1. Download the MinGW-w64 installer from [mingw-w64.org](http://mingw-w64.org/doku.php/download).
2. Run the installer and follow the instructions to install MinGW-w64. Ensure you add MinGW-w64 to your system's PATH during the installation process.
3. Verify the installation by opening a Command Prompt and typing:
    ```bash
    gcc --version
    ```

**Using Cygwin:**

1. Download the Cygwin installer from [cygwin.com](https://www.cygwin.com/).
2. Run the installer and follow the instructions. During the package selection step, search for "gcc" and select the appropriate packages (e.g., gcc-core, gcc-g++).
3. Complete the installation and verify by opening the Cygwin terminal and typing:
    ```bash
    gcc --version
    ```

#### Cross-Compiling with GCC

Cross-compiling refers to building executable code for a platform different from the one on which the compiler is running. GCC supports cross-compiling through cross-compilers that can generate code for various target architectures. This is especially useful for embedded systems development.

To set up a cross-compiler, follow these general steps:

1. **Install the Cross-Compiler Toolchain:** Depending on your target platform, you may need a specific toolchain. For example, for ARM, you can use `gcc-arm-none-eabi`.
2. **Configure the Build System:** Ensure your build system (e.g., Makefile, CMake) is configured to use the cross-compiler.
3. **Compile the Code:** Use the cross-compiler to build the code for the target platform.

Example for ARM:
```bash
sudo apt-get install gcc-arm-none-eabi
```
Compile code:
```bash
arm-none-eabi-gcc -o output_file source_file.c
```

#### Conclusion

GCC is a vital tool for developers working across multiple platforms and languages. Its robust feature set and cross-platform capabilities make it indispensable for modern software development. Whether you are working on Linux, macOS, or Windows, installing GCC is straightforward and empowers you with a powerful compiler for building efficient and portable applications. By mastering GCC and understanding how to set up cross-compilers, you can enhance your development workflow and target a wide range of hardware and software environments.

<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Introduction/Introduction';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Hello-World/Hello-World';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>


<hr>
<div style="text-align: center;">
    © 2024 Bapon Kar. All rights reserved.
</div>
<hr>