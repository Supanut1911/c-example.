#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c;
    float root1;
    float root2;
    float discri;
    float real;
    float imagin;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;

    discri = pow(b,2)-4*a*c;
    cout<<discri<<endl;
    if(discri > 0)
    {
            root1 = (-b+sqrt(discri))/(2*a);
            root2 = (-b-sqrt(discri))/(2*a);

            cout<<endl<<"x1 = "<<root1<<endl<<"x2 = "<<root2;
    }
    else if(discri ==0)
    {
            root1 = root2 = -b/(2*a);
            cout<<endl<<"x1 = "<<root1<<endl<<"x2 = "<<root2;
    }
    else if(discri <0)
    {
            real = -b/(2*a);
            imagin = sqrt(-discri)/(2*a)
            ;

            cout<<endl<<"x1 = "<<real <<"+i"<<imagin<<endl;
            cout<<endl<<"x2 = "<<real <<"-i"<<imagin<<endl;
    }
    return 0;
}
