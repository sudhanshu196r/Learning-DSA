//Array implementation

#include <iostream>
using namespace std;

int main()
{
    int A[5];
    int B[2] = {2,4};
    A[0] = 12;
    A[1] = 24;
    A[2] = 45;

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    cout<<B[0]<<endl;

    return 0;

}