#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    int c1['z'-'a'+1]={},c2['z'-'a'+1]={},i,s=0,l1=0,l2=0;
    scanf("%[^\n]s", s1);
    while(getchar()!='\n');
    scanf("%[^\n]s", s2);
    for(i=0;s1[i];i++)
        l1++;
    for(i=0;s2[i];i++)
        l2++;
    if(l1!=l2)
        printf("Not Anagram\n");
    else{
        for(i=0;s1[i];i++){
            c1[s1[i]-97]++;
            c2[s2[i]-97]++;
        }
        for(i=0;i<'z'-'a'+1;i++){
            if(c1[i]!=c2[i]){
                s=1;
                break;
            }
        }
        (s==0)?printf("Anagram\n"):printf("Not Anagram\n");
    }
    return 0;
}
