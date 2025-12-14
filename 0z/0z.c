#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int a;
	char b, c;
	printf("Введите количество символов: ");
	scanf("%d", &a);
	printf("Введите символ для печати: ");
	scanf(" %c", &b);
	printf("Введите символ для печати: ");
	scanf(" %c", &c);
	for (int i = 0; i < (a/2); i++)
	{
		putchar(b);	
			putchar(c);
		}
}
