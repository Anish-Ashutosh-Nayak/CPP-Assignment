#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"---Before swap---";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"\n---After swap---";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    return 0;
}