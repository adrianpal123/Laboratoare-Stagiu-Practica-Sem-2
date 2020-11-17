#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void citire (char a[101][101],int n)
{
    for (int i=0; i<n; i++)
        scanf("%s",&a[i]);

}

void afisare(char a[101][101],int n)
{
    for (int i=0; i<n; i++)
        printf("%s\n",a[i]);
}

int verif (char a[101][101],int n, char b[101])
{
    int i;
    int k=0;
    for (i=0; i<n; i++)
        if (strstr(a[i],b))
            k++;
    return k;

}
int main()
{

    char array[101][101];
    char arr[]="abc";
    int n=3;
    int i;
    citire(array,n);
    afisare(array,n);
    printf("\n%d",verif(array,n,arr));
}
