#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES 
#include <locale.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <math.h> 

int main() {
    setlocale(LC_ALL, "RUS");

    while (1) {
        long long i;
        int k = 0;
        char a;

        printf("Введите длинное число: ");
        scanf("%lld", &i);

        while (i > 0) {
            if (i % 10 == 3) {
                k++;
            }
            i /= 10;
        }

        printf("Количество цифр 3: %d\n", k);


        while ((getchar()) != '\n');

        printf("Продолжить? (Да - y, нет - n): ");
        a = getchar();

        if (a == 'n' || a == 'N') {
            break;
        }
    }

    printf("Программа завершена.\n");
    return 0;


}