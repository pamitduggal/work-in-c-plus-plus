#include <iostream>
#include <vector>
#include <string>

using namespace std;

class counter
{
public:
int digit;
counter(int num){

     digit=num;

}
void increment(){
for (int i=0; i<10;i++)
        {digit++;}
     cout<<"\nThe Next value = \n "<<digit;
}
void decrement(){
for (int i=0; i<20;i++)
        {digit--;}
        cout<<"\nThe Final value =\n"<<digit;
}
};

int main()
{
    int value;
    cout << "Please Enter the value= \n";
    cin>>value;
    cout<<"\nThe Value is =\n"<<value;
    counter obj=counter(value);
    obj.increment();
    obj.decrement();
}
