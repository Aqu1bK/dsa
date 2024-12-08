/*---------------------uninitizilized array--------------------*/

// #include<iostream>
// #include<stdio.h>

// using namespace std;

// int main() {
//     int A[5];
//     A[0] = 12;
//     A[1] = 15;
//     A[2] = 25;

//     cout<<sizeof(A)<<endl;
//     cout<<A[1]<<endl;
//     printf("%d",A[2]);

//     return 0;

// }

/*--------------------initizilized array---------------------*/

// #include<iostream>
// #include<stdio.h>

// using namespace std;

// int main() {
//     int A[] = {2,4,6,8,10};

//     cout<<sizeof(A)<<endl;
//     cout<<A[1]<<endl;
//     printf("%d",A[2]);

//     return 0;

// }

/*------------printing array list with for loop-------------*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main() 
{
    int A[10]={2,4,6,8,10,12};

    for (int x:A)
    {
        cout<<x<<endl;
    }

    return 0;
}