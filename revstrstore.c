#include <stdio.h>
char *rev(char *p){
    static char a[100];
    static int i=0;
    if(*p){
        rev(p+1);
        a[i++]=*p;
    }
    return a;
}
int main()
{
    char s1[100],*q;
    scanf("%s",s1);
    q=rev(s1);
    printf("%s",q);
}
