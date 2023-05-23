#include <stdio.h>
#include <stdlib.h>
int revword(char *p){
    int z=(*p==' ')?0:((*p=='\0')?0:revword(p+1)+1);
    if(z)
        printf("%c",*p);
    return z;
}
char *revstr(char *p){
    static char a[100];
    static int i=0;
    if(*p){
        revstr(p+1);
        a[i++]=*p;
    }
    return a;
}
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    char *q,*s;
    int a;
    s=revstr(p);
    q=s;
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
