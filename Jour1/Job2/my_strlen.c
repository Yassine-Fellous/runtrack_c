#include <unistd.h>

int my_strlen(char *str){

    int i = 0;
    while(*str != '\0'){
        
        i++;
        str++;
    }
    return i;

}