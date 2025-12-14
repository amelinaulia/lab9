#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES 
#include <locale.h> 
#include <stdio.h> 

int main() {
    setlocale(LC_ALL, "RUS");
    int a, stolbic, stroka;
    char s;
    printf("a s:\n");
    scanf("%d %c", &a, &s);
    for (stolbic = 0; stolbic < a; stolbic++) {
        for (stroka = 0; stroka < a; stroka++)
            printf("%c", s);
            printf("\n");
    }
}