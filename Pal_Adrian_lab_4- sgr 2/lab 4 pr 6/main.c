#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char sir[101];
    scanf("%s",&sir);

    int fr[32]= {0};

    int i;
    for (i=0; i<strlen(sir); i++)
        fr[sir[i]-'a']++;


    int k=0;
    int k1=0;
    for (int j=1; j<=10; j++)
    {
        k=0;
        for (i=0; i<30; i++)
            if (fr[i]==j)
                k++;

        if (k>=1)
            k1++;
    }
    printf("%d",k1);
    return 0;
}
