#include <stdio.h>
#include <stdlib.h>
int palin(char q[],int a,int b){
    int s,t;
    for(s=a,t=b;s<=(a+b)/2;s++,t--)
        if(q[s]!=q[t])
            return 0;
    return 1;
}
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    int i,j,k,m=0,l1=0,l2=0;
    for(i=0;p[i];i++){
        k=0;
        while(p[k]){
            for(j=i;j<=k;j++){
                if(palin(p,i,k)&&k>0){
                    if(k-i>m){
                        m=k-i;
                        l1=i;
                        l2=k;
                    }
                }
            }
            k++;
        }
    }
    if(l2!=0){
        for(i=l1;i<=l2;i++)
            printf("%c",p[i]);
    }
    else{
        printf("No palindrome in string");
    }
    return 0;
}
