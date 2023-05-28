#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack{
    int size;
    int capacity;
    int top;
    int *st;
};
struct stack *create(int n){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=n;
    s->capacity=0;
    s->top=-1;
    s->st=(int *)malloc(n*sizeof(int));
    return s;
}
void push(struct stack **st){
    struct stack *s1=*st;
    int n;
    printf("Push Element:");
    scanf("%d",&n);
    if(s1->capacity==s1->size){
        printf("Stack Overflow\n");
        return;
    }
    s1->st[++s1->top]=n;
    s1->capacity++;
}
void peek(struct stack **st){
    struct stack *s1=*st;
    printf("Top Element:%d\n",s1->st[s1->top]);
}
int pop(struct stack **st){
    struct stack *s1=*st;
    if(s1->top==-1){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    s1->capacity--;
    printf("Popped Element:%d\n",s1->st[s1->top]);
    s1->top--;
    return s1->st[s1->top];
}
int main()
{
    int n;
    scanf("%d",&n);
    struct stack *s=create(n);
    push(&s);
    push(&s);
    push(&s);
    push(&s);
    peek(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    return 0;
}
