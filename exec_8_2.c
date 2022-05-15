#include <stdio.h>
#include <string.h>

/*
char compress(char s[]){
    int j = 0;
    for (int i=0; s[i]!= '\0'; i++)
        if(strcmp(s[i], ' ')){
            //printf("%d\n", i);
            s[j] = s[i];
            j++;
        }
        return s;
}
*/

/*
char compress(char s[]){
    int j = 0;
    for (int i=0; s[i]!= '\0'; i++)
        if(s[i] != ' '){
            s[j] = s[i];
            j++;
        }
        return j;
}
*/

int main (void){
    char text [] = "um,dois,tres. ";
    //char v [20];
    int j = 0;
    for(int i=0; text[i] != '\0'; i++)
        if(text[i] != ' '){
            text[j] = text[i];
            j++;
//            printf("|%d|\n", j);
        }
    printf("|%s|\n", text);
 //   printf("|%d|\n", j);

    return 0;
}