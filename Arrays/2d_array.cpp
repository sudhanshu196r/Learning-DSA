#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{2,3,5,7}};
    int *B[3];
    int **C;

    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>B[i][j];
        }
    }

    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>C[i][j];
        }
    }
    cout<<"Elements of Array A"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Elemets of Array B"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Elements of Array C"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}