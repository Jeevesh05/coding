#include <stdio.h>
//#include <string.h>

void main(){
    char *s[] = {"hello","Jeevesh","how","areYou"};
    printf("string = %s\n", *s+1);
    printf("string = %s\n", *(s+2));
    printf("string = %s\n", (*(s+1)+4));  
    printf("string = %s\n", (*(s+3)+3));  

}