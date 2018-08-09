#include<iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    bool leap =0;
    if(year % 4 ==0)
    {
        if(year % 100 ==0)
        {
            leap = 0;
        }
        else if(year %400 ==0)
        {
            leap = 1;
        }
        else
        {
            leap = 1;
        }
    }
    if(leap == 1)cout<<year<<" is leapYear !";
    else cout<<year<<" is not leapYear !";



    return 0;
}
