// Write a program that reads two matrices of n x n elements each.
// Produce a third matrix with the sum of both matrices.
// n should be greater than 1 and less than or equals to 10.
//
// Made by Jim Holguín on October 15rd, 2018.

#include <stdio.h>
int main()

{
    int a[10][10],b[10][10],c[10][10],n,o,p;
    printf("How many rows and columns? Give me N.\n");
    scanf("%d",&n);

    if (n>1 && n<11)
    {
        printf("\nFirst matrix:\n");
        for(o=0;o<n;++o)
            for(p=0;p<n;++p)
                scanf("%d",&a[o][p]);

        printf("\nSecond matrix:\n");

        for(o=0;o<n;++o)
            for(p=0;p<n;++p)
                scanf("%d",&b[o][p]);

        printf("\nSum:\n");

        for(o=0;o<n;++o)
        {
            for(p=0;p<n;++p)
            {
                c[o][p]=a[o][p]+b[o][p];
                printf("%d\t",c[o][p]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nPlease try again; N should be greater than 1 and less than or equals to 10.\n");
    }

    return 0;
}