#include <stdio.h>

// 9*9 mul table
void Table99(void)
{
	int i,j;
	for (i = 0;i <= 9; i++)
	{
	   for (j = 1; j <= i;j++)
	   {
	       printf("%d*%d=%-4d",i,j,i*j);
	   }
	   printf("\n");
	}
}

int iterate(int value)
{
   if(1==value)
{
	return 1;
}
return iterate(value -1) + value;
}
int main(void)
{
  // printf("%d\n",iterate(10));
	Table99();
   return 1;
}
