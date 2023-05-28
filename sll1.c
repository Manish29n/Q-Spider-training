#include<stdlib.h>
#include<stdio.h>
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
void push(struct node **headref,int data){
    struct node *newnode=create(data);
    struct node *temp=*headref;
    newnode->next=temp;
    *headref=newnode;
}
void append(struct node **headref,int data){
    struct node *newnode=create(data);
    struct node *temp=*headref;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void mid(struct node **headref,int data,int val){
    struct node *newnode=create(data);
    struct node *temp=*headref;
    while(temp->data!=val && temp!=NULL){
        temp=temp->next;
    }
    if(temp!=NULL){
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void del(struct node **headref,int val){
    struct node *temp=*headref;
    struct node *prev=*headref;
    if(temp->data==val){
        *headref=temp->next;
    }
    else{
        while(temp->data!=val && temp!=NULL){
            prev=temp;
            temp=temp->next;
        }
        if(temp!=NULL){
            prev->next=temp->next;
            free(temp);
        }
    }
}
void print(struct node **headref){
    struct node *temp=*headref;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void rev(struct node **headref){
    struct node *temp=*headref;
    struct node *curr=temp;
    struct node *prev=NULL;
    while(temp!=NULL){
        curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
    }
    *headref=prev;
}

void swap(struct node **headref,int x,int y)
{
    struct node *currX=(*headref),*prevX=NULL;
    struct node *currY=(*headref),*prevY=NULL;
    
    if(x==y)
        return;
    
    while(currX && currX->data!=x)
    {
        prevX=currX;
        currX=currX->next;
    }
    
    
    while(currY && currY->data!=y)
    {
        prevY=currY;
        currY=currY->next;
    }
    
    if(currX== NULL || currY==NULL)
        return;
    
    if(prevX!=NULL)
        prevX->next = currY;
    else
        (*headref)=currY;
    
    if(prevY!=NULL)
        prevY->next=currX;
    else
        (*headref)=currX;
        
    struct Node *temp=currY->next;
    currY->next=currX->next;
    currX->next=temp;
    
}
struct node *sort(struct node **headref){
    struct node *newnode=(struct node *)malloc(sizeof(struct node)),*temp=*headref,*prevmin=NULL;
    int min;
    while(temp!=NULL){
        min=temp->data;
        while(temp->data<min){
            prevmin=temp;
            min=temp->data;
            temp=temp->next;
        }
        prevmin->next=temp->next;
        append(&newnode,min);
    }
    return newnode;
}
/*

void swap(struct node *xp,struct node *x,struct node *yp,struct node *y){
    struct node *temp=x->next;
    xp->next=y;
    yp->next=x;
    x->next=y->next;
    y->next=temp;
}
void sort(struct node **headref){
    struct node *xp,*x,*yp,*y;
    xp=yp=NULL;
    x=y=*headref;
    while(x->next){
        while(y->next){
            if(x->data>y->data){
                swap(xp,x,yp,y);
            }
            yp=y;
            y=y->next;
        }
        xp=x;
        x=x->next;
}
}*/
int main()
{
    struct node *head=NULL;
    push(&head,10);
    push(&head,20);
    append(&head,30);
    mid(&head,40,30);
    mid(&head,50,10);
    del(&head,50);
    del(&head,20);
    print(&head);
    printf("\n");
    rev(&head);
    print(&head);
    swap(&head,30,40);
    printf("\n");
    print(&head);
    struct node *tail=sort(&head);
    print(&tail);
    return 0;
}
