#include <stdio.h>
#include <stdlib.h>
int revword(char *p){
    int z=(*p==' ')?0:((*p=='\0')?0:revword(p+1)+1);
    if(z)
        printf("%c",*p);
    return z;
}
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    char *q;
    int a;
    q=p;
    while(*q){
        a=revword(q);
        q+=a;
        if(*q==' '){
            q++;
            printf(" ");
        }
    }
    return 0;
}
