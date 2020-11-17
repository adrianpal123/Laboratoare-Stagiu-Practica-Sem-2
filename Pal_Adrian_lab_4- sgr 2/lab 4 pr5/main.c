#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sir[101];
    scanf("%s",&sir);

    char sir1[101];
    strcpy(sir1,"");
    int l=0;
    int i=0;
    while(i<strlen(sir))
    {
        int contor=1;
        while(sir[i]==sir[i+1]&&i+1<strlen(sir))
        {
            i++;
            contor++;
        }
        if(contor==1) {sir1[l++]=sir[i];}
        i++;

    }

    sir1[l]='\0';
    printf("%s",sir1);
    return 0;
}
