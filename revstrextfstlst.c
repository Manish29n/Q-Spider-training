#include <stdio.h>
#include <stdlib.h>
char *revstr(char *p){
    static char arr[1000];
    static int i=0;
    if(*p){
        revstr(p+1);
        arr[i++]=*p;
    }
    return arr;
}
int main()
{
    char *p=(char *)malloc(1000*sizeof(char));
    scanf("%[^\n]s",p);
    char *q;
    int i,l=0;
    q=revstr(p);
    for(i=0;q[i];i++)
        l++;
    q[0]^=q[l-1]^=q[0]^=q[l-1];
    printf("%s",q);
    return 0;
}
