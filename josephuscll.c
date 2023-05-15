#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void append(struct node **headref,int data){
    struct node *newnode=create(data);
    struct node *temp=*headref;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
int main()
{
    int i,n,k,j;
    scanf("%d%d",&n,&k);
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    struct node *temp=head;
    for(i=2;i<=n;i++)
        append(&head,i);
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head;
    temp=head;
    for(i=n;i>1;i--){
        for(j=0;j<k;j++)
            temp=temp->next;
        temp->next=temp->next->next;
    }
    printf("%d",temp->data);
    return 0;
}
