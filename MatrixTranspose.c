/*����ת��*/
#include<stdio.h>
int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d ", a[j][i]);	
		}
		printf("\n");	
	}	
	return 0;	
} 
