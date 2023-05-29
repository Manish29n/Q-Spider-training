#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack{
    int size;
    int capacity;
    int top;
    char *st;
};
struct stack *create(int n){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=n;
    s->capacity=0;
    s->top=-1;
    s->st=(char *)malloc(n*sizeof(char));
    return s;
}
void push(struct stack **st,char c){
    struct stack *s1=*st;
    if(s1->capacity==s1->size){
        printf("Stack Overflow\n");
        return;
    }
    s1->st[++s1->top]=c;
    s1->capacity++;
}
char peek(struct stack **st){
    struct stack *s1=*st;
    return s1->st[s1->top];
}
void pop(struct stack **st){
    struct stack *s1=*st;
    if(s1->top==-1){
        printf("Stack Underflow\n");
    }
    s1->capacity--;
    s1->top--;
}
int main()
{
    char st[100];
    int i,l=0,j,x=0;
    scanf("%s",st);
    for(i=0;st[i];i++)
        l++;
    struct stack *s=create(l);
    for(i=0;i<l/2;i++){
        push(&s,st[i]);
    }
    j=(l%2==0)?l/2:l/2+1;
    for(;st[j];j++){
        if(peek(&s)==st[j]){
            pop(&s);
        }
        else{
            x=1;
            break;
        }
    }
    (x==0)?printf("Palindromic string\n"):printf("Non Palindromic string\n");
    return 0;
}
