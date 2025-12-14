#define _CRT_SECURE_NO_WARNINGS
#define COL 9 //столбик
#define ROW 9 //строка
#include <stdio.h>
#include <math.h>
void main()
{
	int row, col;
	for (row = 1; row <= ROW; row++)
	{
		for (col = 1; col <= row; col++)
		printf("%5d", col * row);
		printf("\n");
	}
	system("pause");
}
