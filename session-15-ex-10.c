#include <stdio.h>
#include <string.h>

int main() {
    char text[100] = "hello my name is long";
    int count[256] = {0};

    for (int i = 0; i < strlen(text); i++) {
        count[(unsigned char)text[i]]++;
    }

    printf("Các ký tự và số lần xuất hiện:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("Ký tự '%c' xuất hiện %d lần\n", i, count[i]);
        }
    }

    return 0;
}
