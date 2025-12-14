#define _CRT_SECURE_NO_WARNINGS
#define COL 9 //столбик
#define ROW 9 //строка
#define SIZE 9
#include <stdio.h>
#include <math.h>
void main()
{ int row, col;
    for (row = 1; row <= SIZE; row++){
        for (int space = 1; space < row; space++)
       printf("     ");
        // Вывод чисел правого верхнего треугольника
        for (col = row; col <= SIZE; col++)
            printf("%5d", col * row);

        printf("\n");
    }

    system("pause");
}
