#include<iostream>

using namespace std;

int main()
{
    int series;
    int a = 1;
    int p1=0 ,p2=1 ;
    cin>>series;
    int result = 0;

    for(int i=0;i<series;i++)
    {
        /* another way
        result = result + a;
        a = result  - a;
        */
        if(i==0)cout<<"0"<<",";

        result = p1 + p2;
        p2 = p1;
        p1 = result;

        cout<<result<<",";
    }

    return 0;
}
