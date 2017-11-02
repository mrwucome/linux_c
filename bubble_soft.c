/*************************************************************************
	> File Name: bubble_soft.c
	> Author: wuxin 
	> Created Time: 2017年10月31日 星期二 07时19分58秒
 ************************************************************************/

#include<stdio.h>
void print_array(int *arry, int length)
{
	int i = 0;
	while (i < length)
	{
		printf("%d  ",arry[i++]);
	}
	printf("\n");
}

#if 0
void bubble_sort(int *array, unsigned int first, unsigned last)
{
	unsigned int i = 0,k = 0, sign = 1;
	int temp;

	while(sign)
	{
		sign = 0; // clear zero

		for (int i = first; i < last -k; i++)
		{
			if (array[i] > array[i+1])
			{

				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sign++;
			}
		}
		k++;//
	}
}
#else
void bubble_sort(int *array,unsigned int first,unsigned last)
{
	unsigned int i = 0, j = first,k = 0, sign = 1;
	int temp ;
	while(sign)
	{
		sign = 0;
		k = last;

		for (i = first; i < k; i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				sign++;
				j = i + 1;
			}
		}
		k = j;
	}
}
#endif

int main(void)
{
	int array[10] = {4,1,7,8,5,3,9,5,6,3};
	printf("brefore bubble_soft: ");
	print_array(array,10);
	bubble_sort(array,0,9);

	printf("after bubble_soft: ");
	print_array(array,10);

	getchar();
	return 0;
}
