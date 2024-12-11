#include <stdio.h>

int main() {
    char str[100];
    int count = 1;
    
    printf("Moi ban nhap vao mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') { 
            count++; 
        }
    }

    printf("Chuoi: %s\n", str);
    printf("So tu trong chuoi: %d\n", count);

    return 0;
}

