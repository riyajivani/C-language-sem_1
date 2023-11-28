/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int determinant(int[][10],int);

int main()
{
    int d,a[10][10],i,j,k;

    printf("enter order of determinant:");
    scanf("%d",&k);

    if(k>10)
        exit(0);

    printf("\nenter a determinant of order %d\n\n",k);
    for(i=0;i<=k-1;i++)
    {
        for(j=0;j<=k-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    d=determinant(a,k);

    printf("Determinant is %d",d);

    return 0;
}

int determinant(int a[10][10],int k)
{
    int det,c,s=1,b[10][10],i,j,m,n;

    if(k==1)
        return(a[0][0]);
    else
    {
        det=0;
        for(c=0;c<=k-1;c++)
        {
            m=0;
            n=0;

            for(i=0;i<k;i++)
            {
                for(j=0;j<k;j++)
                {
                    b[i][j]=0;

                    if(i!=0&&j!=c)
                    {
                        b[m][n]=a[i][j];

                        if(n<(k-2))
                            n++;
                        else
                        {
                            n=0;
                            m++;
                        }
                    }
                }
            }

            det=det+s*(a[0][c]*determinant(b,k-1));
            s=-1*s;
        }
    }

    return(det);
}


