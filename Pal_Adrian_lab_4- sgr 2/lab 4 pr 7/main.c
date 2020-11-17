#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[101];

    int n;
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&array[i]);

    int k=0;

    for (i=0;i<n-1;i++)

        if (array[i]==array[i+1])
            k++;
if (array[i]==array[i+1])
            k++;
    printf("%d",k/2);


    return 0;
}
