#include <unistd.h>

int char_is_digit(char a){
    if(a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9'){
        return 1;
    }
    else{
        return 0;
    }
}