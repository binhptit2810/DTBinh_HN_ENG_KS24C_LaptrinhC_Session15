#include <stdio.h>

int main() {
    char str[100],kitu;
    int i, j;
    // yeu cau nguoi dung nhap chuoi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    // nhap ki tu can xoa
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kitu);
    // su dung vong lap de xoa ki tu
    for (i = 0, j = 0; str[i] !='\0'; i++) {
        if (str[i] != kitu) {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; 
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kitu, str);
    return 0;
}

