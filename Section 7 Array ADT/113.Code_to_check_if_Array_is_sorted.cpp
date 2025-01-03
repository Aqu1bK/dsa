#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for(i=0; i<arr.length; i++)
		printf("%d ",arr.A[i]);
}

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void Insertsort(struct Array *arr, int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
       return;
    while(i>=00 && arr-> A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array arr)
{
	int i;
	for(i=0; i<arr.length-1; i++)
	{
		if(arr.A[i]>arr.A[i+1])
			return 0;
	}
	return 1;
}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while (i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}

int main()
{
    // struct Array arr={{2,-3,25,10,-15,-7},10,6}
	struct Array arr1= {{2,3,9,16,18,21,28,32,35},10,9};
    // Insertsort(&arr1,20);
    // Rearrange(&arr);
	printf("%d",isSorted(arr1));
	Display(arr1);
	return 0;
}