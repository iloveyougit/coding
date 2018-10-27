#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
 void print(struct Node* n)
    {
        while(n!=NULL)
        {
            printf("%d\n",n->data);
            n=n->next;
        }
    }
int main()
{
    struct Node* head=NULL;
    struct Node* sec=NULL;
    struct Node* third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    sec    =(struct Node*)malloc(sizeof(struct Node));
    third    =(struct Node*)malloc(sizeof(struct Node));
   
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=third;
    third->data=3;
    third->next=NULL;
    print(head);
}

