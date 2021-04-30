#include <iostream>
#include <math.h>

using namespace std;

class rectangle
{
    int length;
    int breadth;
public:
    int getarea (int l, int b)
    {
        int area;
        area = l * b;
        cout << "\nArea = " << area ;
    }

int getperimeter (int l, int b)
    {
        int peri;
        peri = 2 * (l + b);
        cout << "\nPerimeter =  " << peri ;
        cout<<"\n Rectangle: \n\n";
    }
int display (int l, int b)
    {
   for(int i=1; i<=b; i++)
{
    for(int j=1; j<=l; j++)
    {
        cout<<"\t*";
    }
    cout<<"\n";
}
    }
};
int main ()
{
    int l, b;
    rectangle r;
    cout << "Please Enter length of rectangle:\n";
    cin >> l;
    cout << "Please Enter breadth of rectangle:\n";
    cin >> b;
    r.getarea (l, b);
    r.getperimeter (l, b);
    r.display(l,b);

return 0;
}
