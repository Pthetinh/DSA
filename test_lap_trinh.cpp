#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<locale.h>
#define N 1000

int main()
{
	int n = 3, m = 4;
	int a[N][N];
	int b[N];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		int min_r = a[i][0];
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < min_r)
			{
				min_r = a[i][j];
			}
		}
		b[i] = min_r;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 0)
			{
				a[i][j] = b[i];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
