#include <stdio.h>
#include <string.h>

int main() {
	// khai bao 1 chuoi ki tu 
    char str[] = "bcdacdjjrjbbtfhgbjd";  
    int count[256] = {0};  

    // su dung vong lap for de dem so lan xuat hien cua ki tu 
    for (int i = 0; i < strlen(str); i++){
        count[str[i]]++;  
    }
    // In ra các k? t? và s? l?n xu?t hi?n
    for (int i = 0; i < 256; i++){
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
    return 0;
}

