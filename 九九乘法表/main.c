#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	printf("请输入想打印行数：");
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%0.2d*%0.2d=%0.2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}