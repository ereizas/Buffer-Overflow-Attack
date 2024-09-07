#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char B[10];
    char s1[] = "I owe you $1000";
    char s2[] = "I don't know you";
    while(1){
        printf("What's your name? ");
        gets(B);
        printf("Name is %s\n", B);
    }
    return 0;
}