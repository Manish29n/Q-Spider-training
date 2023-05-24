#include <stdio.h>
void rev(char *p){
    if(*p){
        rev(p+1);
        printf("%c",*p);
    }
}
int main()
{
    char s1[100];
    scanf("%[^\n]s",s1);
    rev(s1);
}
