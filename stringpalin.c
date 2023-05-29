#include <stdio.h>
int main()
{
    char s[100];
    int l=0,i,j,c=0;
    scanf("%s", s);
    for(i=0;s[i];i++)
        l++;
    for(i=0,j=l-1;i<l/2;i++,j--){
        if(s[i]!=s[j]){
            c=1;
            break;
        }
    }
    (c==0)?printf("Palindrome"):printf("Not Palindrome");
}
