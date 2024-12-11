#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Moi ban nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++; 
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0; 
}

