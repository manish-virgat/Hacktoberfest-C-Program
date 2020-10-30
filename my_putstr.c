#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}

void my_putstr(char *s) {
    int i = -1;

    while(s[++i]) {
        my_putchar(s[i]);
    }
}

int main(int ac, char **av) {
    if (ac > 1) {
        my_putstr(av[1]);
        my_putchar('\n');
    }
    return 0;
}
