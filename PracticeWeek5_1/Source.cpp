#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m;
	scanf_s("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i > j)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}