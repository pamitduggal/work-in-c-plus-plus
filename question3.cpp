#include <iostream>

using namespace std;

int main()
{
    int x,y,p,s,total;
    cout<<"Enter The Value of x \n";
    cin>>x;
    cout<<"Enter The Value of y \n";
    cin>>y;
    p=x*y;
    s=x+y;
    total=s+p*(s-x)*(p+y);
    cout<<"\nTotal is = "<<total;
    return 0;
}
