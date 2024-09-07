#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char B[10];
    char s1[] = "I owe you $1000";
    char s2[] = "I don't know you";
    while(1){
        printf("What's your name? ");
        gets(B);
        if(strstr(B,"joker")){
            printf("%s\n",s1);
        }
        else{
            printf("%s\n",s2);
        }
    }
    return 0;
}