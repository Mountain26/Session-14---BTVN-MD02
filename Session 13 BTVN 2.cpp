#include <stdio.h>
int main(){
	char str[100]; 
	
	printf("Moi ban nhap vao mot chuoi bat ki: ");
	scanf("%s", &str);
	
	int length = 0;
    while (str[length] != '\0') {
        printf("%c ", str[length]);
        length++;
}
}
