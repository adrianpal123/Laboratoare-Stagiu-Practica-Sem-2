#include <stdio.h>
#include <stdlib.h>

void citire (int vect[])
{
    int i;
    for (i=0; i<4; i++)
        scanf("%d",&vect[i]);
}

void afisare (int vect[])
{
    int i;
    for (i=0; i<4; i++)
        printf("%d ", vect[i]);
}

int cautare (int vect[], int nr)
{
    int i;
    for (i=0; i<4; i++)
        if (vect[i]==nr)
            return i;
    return -1;
}

int unice (int vect[])
{
    int fr[101]= {0};
    int i;
    for (i=0; i<4; i++)
        fr[vect[i]]++;


    int k=0;

    for (i=0; i<101; i++)
        if (fr[i]==1)
            k++;

    return k;

}
int main()
{

    int vect[5];
    citire(vect);
    afisare(vect);

    int nr=5;

    printf("\n%d",cautare(vect,nr));

    printf("\n%d",unice(vect));

    return 0;
}
