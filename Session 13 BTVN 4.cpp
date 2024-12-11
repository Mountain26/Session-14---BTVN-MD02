#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    char valueItem[2];

    printf("Moi ban nhap vao mot chuoi bat ki: ");
    scanf("%99s", str);


    int length = 0;
    while (str[length] != '\0') {
        length++; 
    }

    printf("Moi ban nhap vao ki tu can tim o trong chuoi: \n");
    scanf(" %c", &valueItem[0]);

    for (int i = 0; i < length; i++) {
        if (str[i] == valueItem[0]) {
            count++;
        } 
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", valueItem[0], count); 

    return 0;
}

