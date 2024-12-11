#include <stdio.h>
int main(){
	char str[100]; 
	
	printf("Moi ban nhap vao mot chuoi bat ki: ");
	scanf("%s", &str);
	
	int length = 0;
    while (str[length] != '\0') {
        length++;
}
	printf("Ban da nhap chuoi: %s \n", str);
	printf("Do dai cua chuoi ban nhap la: %d", length);
} 
