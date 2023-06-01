#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    int i,j,k;
    for(i=0;p[i];i++){
        k=0;
        while(p[k]){
            for(j=i;j<=k;j++){
                if(j==i){
                    printf("\n");
                }
                printf("%c",p[j]);
            }
            k++;
        }
    }
    return 0;
}
