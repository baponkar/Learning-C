#include <gtk/gtk.h>

GtkWidget *entry;
gchar *first_number;
gchar operation;

void on_number_clicked(GtkButton *button, gpointer data) {
    const gchar *current_text = gtk_entry_get_text(GTK_ENTRY(entry));
    const gchar *new_text = gtk_button_get_label(button);
    gchar *final_text = g_strdup_printf("%s%s", current_text, new_text);
    gtk_entry_set_text(GTK_ENTRY(entry), final_text);
    g_free(final_text);
}

void on_operation_clicked(GtkButton *button, gpointer data) {
    first_number = g_strdup(gtk_entry_get_text(GTK_ENTRY(entry)));
    operation = *gtk_button_get_label(button);
    gtk_entry_set_text(GTK_ENTRY(entry), "");
}

void on_equal_clicked(GtkButton *button, gpointer data) {
    const gchar *second_number = gtk_entry_get_text(GTK_ENTRY(entry));
    gdouble num1 = g_ascii_strtod(first_number, NULL);
    gdouble num2 = g_ascii_strtod(second_number, NULL);
    gdouble result = 0.0;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                gtk_entry_set_text(GTK_ENTRY(entry), "Error");
                return;
            }
            break;
    }

    gchar *result_text = g_strdup_printf("%g", result);
    gtk_entry_set_text(GTK_ENTRY(entry), result_text);
    g_free(result_text);
    g_free(first_number);
}

void on_clear_clicked(GtkButton *button, gpointer data) {
    gtk_entry_set_text(GTK_ENTRY(entry), "");
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), entry, 0, 0, 4, 1);

    const gchar *button_labels[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", "C", "=", "+"}
    };

    for (gint i = 0; i < 4; i++) {
        for (gint j = 0; j < 4; j++) {
            GtkWidget *button = gtk_button_new_with_label(button_labels[i][j]);
            gtk_grid_attach(GTK_GRID(grid), button, j, i + 1, 1, 1);

            if (g_strcmp0(button_labels[i][j], "=") == 0) {
                g_signal_connect(button, "clicked", G_CALLBACK(on_equal_clicked), NULL);
            } else if (g_strcmp0(button_labels[i][j], "C") == 0) {
                g_signal_connect(button, "clicked", G_CALLBACK(on_clear_clicked), NULL);
            } else if (g_strcmp0(button_labels[i][j], "+") == 0 || g_strcmp0(button_labels[i][j], "-") == 0 ||
                       g_strcmp0(button_labels[i][j], "*") == 0 || g_strcmp0(button_labels[i][j], "/") == 0) {
                g_signal_connect(button, "clicked", G_CALLBACK(on_operation_clicked), NULL);
            } else {
                g_signal_connect(button, "clicked", G_CALLBACK(on_number_clicked), NULL);
            }
        }
    }

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
