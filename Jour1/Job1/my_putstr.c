#include <unistd.h>

void my_putchar(char a);

void my_putstr(const char *str) {

        while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
    
}