#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void push(struct node **head,int data){
    struct node *newnode=create(data);
    struct node *temp=*head;
    *head=newnode;
    if(temp!=NULL){
        temp->prev=newnode;
        newnode->next=temp;
    }
}
void append(struct node **head,int data){
    struct node *newnode=create(data);
    struct node *temp=*head;
    if(temp==NULL){
        *head=newnode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void insmid(struct node **head,int data,int val){
    struct node *newnode=create(data);
    struct node *temp=*head;
    while(temp->data!=val && temp){
        temp=temp->next;
    }
    if(!temp){
        return;
    }
    temp->next->prev=newnode;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
void display(struct node **head){
    struct node *temp=*head,*last=NULL;
    while(temp!=NULL){
        last=temp;
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
    while(last!=NULL){
        printf("%d->",last->data);
        last=last->prev;
    }
    printf("\n");
}
void delete(struct node **head,int val){
    struct node *temp=*head;
    if(temp->data==val && !temp->next){
        *head=NULL;
        return;
    }
    if(temp->data==val){
        *head=temp->next;
        temp->next->prev=NULL;
        return;
    }
    while(temp->data!=val && temp){
        temp=temp->next;
    }
    if(!temp){
        return;
    }
    if(!temp->next){
        temp->prev->next=NULL;
        return;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
}
void rev(struct node **head){
    struct node *temp,*cur,*last=*head;
    temp=cur=NULL;
    while(last!=NULL){
        temp=cur=last;
        last=last->next;
    }
    *head=temp;
    while(cur!=NULL){
        cur=temp->prev;
        temp->next=cur;
        temp->prev=last;
        last=temp;
        temp=cur;
    }
}
int main()
{
    struct node *head=NULL;
    push(&head,20);
    append(&head,10);
    insmid(&head,30,20);
    push(&head,40);
    insmid(&head,50,30);
    append(&head,60);
    display(&head);
    rev(&head);
    display(&head);
    delete(&head,60);
    delete(&head,40);
    delete(&head,50);
    display(&head);
    rev(&head);
    display(&head);
    return 0;
}
