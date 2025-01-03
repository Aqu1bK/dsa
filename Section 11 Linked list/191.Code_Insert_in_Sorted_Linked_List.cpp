#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay(p->next);
    }
}

int count (struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
    else
        return 0;
}

int sum(struct Node *p)
{
    int s=0;

    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int RSum(struct Node *p)
{
    if(p==NULL)
       return 0;
    else   
       return RSum(p->next)+p->data;
}

int Max(struct Node *p)
{
    int max=-32768;

    while(p)
    {
        if(p->data>max)
           max=p->data;
        p=p->next;
    }
    return max;
}

int RMax(struct Node *p)
{
    int x=0;
    if(p==0)
       return -32768;
    x=RMax(p->next);
    if(x>p->data)
         return x;
    else 
         return p->data;
}

struct Node * LSearch(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
             return p;
        p=p->next; 
    }
    return NULL;
}

struct Node * Fast_LSearch(struct Node *p,int key)
{
    struct Node *q;

    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p; 
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

struct Node * RSearch(struct Node *p,int key)
{
    if(p==NULL)
       return NULL;
    if(key==p->data)
       return p;
    return RSearch(p->next,key);
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if(index < 0 || index > count(p))
        return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;

    if(index == 0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }

}

void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;

    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

int main()
{
    // struct Node *temp;
    int A[]={10,20,30,40,50};
    create(A,5);

    // Display(first);
    // RDisplay(first);
    // printf("Length is %d", count(first));
    // printf("Length is %d", Rcount(first));
    // printf("Sum is %d\n\n",sum(first));
    // printf("Sum is %d\n\n",RSum(first));

    // printf("Max is %d\n",Max(first));
    // printf("Max is %d\n",RMax(first));

    // temp=LSearch(first,25);
    // if(temp)
    //     printf("Key is Found %d",temp->data);
    // else
    //     printf("Key not found");



    // temp=Fast_LSearch(first,10);
    // if(temp)
    //     printf("Key is Found %d",temp->data);
    // else
    //     printf("Key not found");

    


    // temp=RSearch(first,10);
    // if(temp)
    //     printf("Key is Found %d",temp->data);
    // else
    //     printf("Key not found");

    // Insert(first,0,10);

    SortedInsert(first,35);
    Display(first);
    printf("\n\n");
    return 0;
}