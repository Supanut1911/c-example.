#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a =";
    cin>>a;
    cout<<"b =";
    cin>>b;
    /*
    int temp;
    temp = a;
    a = b;
    b = temp;
    */

    a = a+b;
    b = a-b;
    a = a-b;


    cout<<"a ="<<a<<","<<"b ="<<b;

    return 0;
}
