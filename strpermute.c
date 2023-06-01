#include <stdio.h>
#include <stdlib.h>
void swap(char *p,char *q){
    char temp=*p;
    *p=*q;
    *q=temp;
}
void permute(char *p,int l,int r){
    int i;
    if(l==r)
        printf("%s\n",p);
    else{
        for(i=l;i<=r;i++){
            swap(p+l,p+i);
            permute(p,l+1,r);
            swap(p+l,p+i);
        }
    }
}
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    int i;
    scanf("%[^\n]s",p);
    for(i=0;p[i];i++);
    permute(p,0,i-1);
    return 0;
}
