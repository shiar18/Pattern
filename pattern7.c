#include<stdio.h>
void main()
{
    int i, j,n;
    printf("Enter Number of Rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
    return 0;
}

//
A
BB
CCC
DDDD
EEEEE