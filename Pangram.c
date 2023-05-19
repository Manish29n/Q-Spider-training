#include <stdio.h>
int main()
{
    char s1[1000];
    int c1[('z'-'a')+('Z'-'A')+2]={},s=0,i;
    scanf("%[^\n]s", s1);
    while(getchar()!='\n');
    for(i=0;s1[i];i++){
        if(s1[i]>'a'-1&&s1[i]<'z'+1)
            c1[s1[i]-'a']++;
        if(s1[i]>'A'-1&&s1[i]<'Z'+1)
            c1[s1[i]-'A'+26]++;
    }
    for(i=0;i<'z'-'a'+'Z'-'A'+2;i++){
        printf("%d ",c1[i]);
        if(c1[i]==0){
            s=1;
            break;
        }
    }
    (s==0)?printf("\nPangram\n"):printf("\nNot Pangram\n");

    return 0;
}
