#include <stdio.h>
#include <string.h>

int main() {
    char text[100] = "hello my name is long ";
    
    for (int i = 0; i < strlen(text); i++) {
        if (i == 0 || text[i - 1] == ' ') {
            if (text[i] >= 'a' && text[i] <= 'z') {
                text[i] = text[i] - 'a' + 'A';
            }
        }
    }

    printf("sau khi viet hoa chu cai dau: %s\n", text);

    return 0;
}
