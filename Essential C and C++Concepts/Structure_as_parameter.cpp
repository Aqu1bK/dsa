/*------------pass by value----------*/

// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>

// using namespace std;

// struct Rectangle 
// {
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle r)
// {
//     r.length=20;
//     cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
// }

// int main()

// {
//     struct Rectangle r={10,5};
//     fun(r);

//     printf("Length %d\nBreadth %d\n",r.length,r.breadth);
//     return 0;
// }

/*--------------pass by address(pointer)-----------*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    p->length=20;
    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
}

int main()

{
    struct Rectangle r={10,5};
    fun(&r);

    printf("Length %d\nBreadth %d\n",r.length,r.breadth);
    return 0;
}

