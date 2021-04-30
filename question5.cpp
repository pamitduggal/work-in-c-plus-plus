#include <iostream>

using namespace std;
int number(int val)
 {
   if(val<=100) {
      cout<<"\t"<<val;
      number(val+1);
   }
 }

  int numberrev(int valrev)
   {
   if(valrev>=1)
    {
      cout<<"\t"<<valrev;
      numberrev(valrev-1);
   }
   }
int main() {
   int val = 1;
   int valrev=100;
   cout<<"Numbers 1-100\n\n\n";
   number(val);
   cout<<"\n\n\nNumbers 100-1\n\n\n";
   numberrev(valrev);
   return 0;
}


