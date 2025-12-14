#include <locale.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES 
int main() {
	int a;
	char b;
	printf("Введите количество символов: ");
	scanf("%d", &a);
	printf("Введите символ для печати: ");
	scanf(" %c", &b);
	for (int i = 0; i < a; i++) {
		putchar(b);
	}
}