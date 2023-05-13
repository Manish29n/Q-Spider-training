#include <stdio.h>
#include <stdlib.h>
int main()
{
    int alp[100]={},i,j,k;
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    for(i=0;p[i+1];i++){
        if(p[i]!='~'){
            k=1;
            for(j=i+1;p[j];j++){
                if(p[i]==p[j]){
                    k++;
                    p[j]='~';
                }
            }
            printf("%c - %d\n",p[i],k);
        }
    }
    return 0;
}
