#include <unistd.h>
#include <stdio.h> 

int char_is_digit(char a);
int str_is_digit(char *str);

int main(){

    int result_c = char_is_digit('1');
    printf("%d\n", result_c);

    int result_str = str_is_digit("fsfq1ffs");
    printf("%d\n", result_str);

    return 0;
    
}