#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    int l1=0,l2=0,i,j,c,k;
    for(i=0;s1[i];i++)
        l1++;
    for(i=0;s2[i];i++)
        l2++;
    for(i=0;i<=l1-l2;i++){
        c=0;
        if(s2[0]==s1[i]){
            for(j=1,k=i+1;j<l2;j++,k++){
                if(s1[k]==s2[j])
                    c++;
                else
                    j=l2;
            }
        }
        if(c==l2-1)
            break;
    }
    (c==l2-1)?printf("Substring"):printf("Not Substring");
}
