// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>

// using namespace std;

// struct Rectangle
//  {
//     int lenght;
//     int breadth;
//  };

//  int main() 
//  {
//     Rectangle r = {10,5};
//     cout<<r.lenght<<endl;
//     cout<<r.breadth<<endl;

//     Rectangle *p = &r;
//     cout<<p->lenght<<endl;
//     cout<<p->breadth<<endl;

//     return 0;
//  }

 /*----------Dynamic allocation---------*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
 {
    int lenght;
    int breadth;
 };

 int main() 
 {
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //C language
    // p=new Rectangle;  //C++ 

    p->lenght=15;
    p->breadth=7;

    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;

    return 0;
 }