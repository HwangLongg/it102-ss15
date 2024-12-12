#include <stdio.h>
#include <string.h>
int main (){
    int d =0 , b=0,c=0;
    char text[100]={"Hello my gmail is test123@gmail.com"};
    for (int i =0;i<strlen(text);i++){
        if (text[i]>='a' && text[i]<='z'){
            b++;
        }
        else if (text[i]>='A' && text[i]<='Z'){
            b++;
        }else if  (text[i]>='0' && text[i] <='9'){
            c++;
        }
        else {d++;}
    }
    printf ("chu cai %d \n",b);
    printf ("chu so %d \n",c);
    printf ("ki tu dac biet %d \n ",d);
    return 0;
}