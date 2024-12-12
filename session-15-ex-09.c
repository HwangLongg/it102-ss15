#include <stdio.h>
#include <string.h>
int main (){
    char n;
    char text[100]={"hello world"};
    scanf ("%c",&n);
    for (int i = 0;i<strlen(text)-1;i++){
        if (text[i]==n){
            text[i]=text[i+1];
        }
    }
    printf("%s",text);
    return 0;
}