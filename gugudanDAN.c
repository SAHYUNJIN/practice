#include <stdio.h>
int main(void)
{
        int i,j;
	for(j=1; j<10; j++)
	{
                printf("%dDAN        ", j);   // space: 0  8
	}
	printf("\n");
        for(i=1; i<10; i++)
        {
                for(j=1; j<10; j++)
                {
                        printf("%dx%d=%-4d    ", j, i, j*i);  // space: 0  4, %d lastpart: -4
                }
                printf("\n");
        }
        return 0;
}

