#include <stdio.h>

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void matrixDegrees(int img[][4], int m)
{
	int i = 0;
	int j = 0;
	for (; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			swap(img[i][j], img[m - j - 1][i]);
		}
	}
}

int main()
{
	int img[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	
	matrixDegrees(img, 4);

	int i = 0;
	int j = 0;
	for (; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", img[i][j]);
		}
		printf("\n");
	}
	return 0;
}
