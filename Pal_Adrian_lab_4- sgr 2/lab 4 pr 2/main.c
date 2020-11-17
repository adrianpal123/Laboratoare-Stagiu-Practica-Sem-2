#include <stdio.h>
#include <stdlib.h>

void afisare (int matrix[101][101])
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

}

int cate_coloane(int matrix[101][101])
{

    int k=0;
    int i;
    int j;
    int ok=0;
    for (j=0; j<3; j++)
    {

        ok=0;
        for (i=0; i<3; i++)
            if (matrix[i][j]%2!=0)
                ok=1;

        if (ok==0)
            k++;
    }

    return k;
}

void inmul(int matrix[101][101], int vector[101])
{
    int i,j;
    int s=0;
    int matrix1[101];
    for (i=0; i<3; i++)
            matrix1[i]=0;

    int r=0;
    int k;
    for (i=0; i<3; i++)
    {
        s=0;
        k=0;
        for (j=0; j<3; j++)
        {
        s=s+matrix[i][j]*vector[k];
        k++;
        }
        matrix1[r]=s;
        r++;

    }

    for (i=0;i<r;i++)
        printf("%d ", matrix1[i]);

}
int main()
{

    int i,j,matrix[101][101];
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            scanf("%d",&matrix[i][j]);
    afisare(matrix);
    printf("%d",cate_coloane(matrix));

    printf("\n");


    int vector[]={1,3,7};
    inmul(matrix,vector);



    return 0;
}
