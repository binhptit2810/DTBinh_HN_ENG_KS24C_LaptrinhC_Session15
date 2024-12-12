#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    // duyet tung ki tu co trong chuoi
    for (int i = 0; i < strlen(str); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >='a' && str[i] <= 'z') {
                str[i]-= 32; 
            }
        }
    }
    printf("Chuoi sau khi viet hoa chu cai dau: %s\n", str);
    return 0;
}

