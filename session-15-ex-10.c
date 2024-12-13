#include <stdio.h>
#include <string.h>
int main (){
    
    int n[256]={0};
    char a[50]={"abcdaa"};
    for (int i =0;i<strlen(a);i++){
        if (a[i]!= '\n'){
            n[(int)a[i]]++;

        }
        
    }
    for (int i =0;i<256;i++){
        if (n[i]>0){
            printf ("%c : %d\n",i,n[i]);
        }
    }
    return 0;
    
}
