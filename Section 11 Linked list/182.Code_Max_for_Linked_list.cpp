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

int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);

    // Display(first);
    // RDisplay(first);
    // printf("Length is %d", count(first));
    // printf("Length is %d", Rcount(first));
    // printf("Sum is %d\n\n",sum(first));
    // printf("Sum is %d\n\n",RSum(first));

    // printf("Max is %d\n",Max(first));
    printf("Max is %d\n",RMax(first));


    return 0;
}