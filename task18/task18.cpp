// Транспонирование матрицы 1) в другую матрицу 2) в ту же матрицу

#include <iostream>
using namespace std;
int** memory(int n);
void fill(int** a, int n);
void trans(int** a, int** b, int n);
	
int main()
{
	int n, m,var;
	printf("vvedite variant\n");
	scanf_s("%d", &var);
	printf("vvedite razmernost'\n");
	scanf_s("%d", &n);
	int** A = memory(n);
	int** B = memory(n);
	printf("zapolnite massiv\n");
	fill(A, n);
	trans(A, B, n);
	if (var == 2)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				A[i][j] = B[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%d\n", A[i][j]);
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%d\n", B[i][j]);
			}
		}
	}
	return 0;
}
//выделение памяти
int** memory(int n)
{
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}
	return a;
}
//заполнение элементов
void fill(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}
//транспонирование
void trans(int** a, int** b, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
}