#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int chucai = 0;
	int chuso = 0;
	int dacbiet = 0;
 	// yeu cau nguoi dung nhap chuoi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    // duyet tung ki tu trong chuoi
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z')){
            chucai++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            chuso++;
        } else {
            dacbiet++;
        }
    }
    printf("So ky tu la chu cai: %d\n",chucai);
    printf("So ky tu la chu so: %d\n",chuso);
    printf("So ky tu dac biet: %d\n",dacbiet);

    return 0;
}

