#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main()
    {
        char a[101][101];
        int n;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
            scanf("%s",a[i]);
        int ap[101][101];
        for(int i=1; i<=n; i++)
            for(int j=0; j<30; j++)
                ap[i][j]=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<strlen(a[i]); j++)
                ap[i][a[i][j]-'a']++;
        }

        int ok=1;
        for(int i=0; i<30; i++)
        {
            for(int j=1; j<=n; j++)
                if(ap[j][i]!=ap[1][i])
                    ok=0;

        }
        if(ok==1)
            printf("anagrame");
        else
            printf("nu sunt anagrame");
        return 0;
    }
