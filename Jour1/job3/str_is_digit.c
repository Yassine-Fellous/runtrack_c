#include <unistd.h>

int str_is_digit(char *str){

    while(*str != '\0'){
        if (*str >= '1' && *str <= '9') {
            return 1;
        }
        str++;
    }
    return 0;
}
