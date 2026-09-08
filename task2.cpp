#include <iostream>
#include <iomanip>

using namespace std;
int main(){
   int num[5];
   int total=0;
   // implementing the first loop 
   for(int i=0;i<5;i++)
   {
    cout<<"Enter Number "<<i+1<<":";
    cin>>num[i];
   }
   //implementing the second loop
   for(int i=0; i<5; i++)
   {
    total += num[i];
   }
   // giving the final result 
   cout<<"Total is:"<<total;
   cin.get();
   return 0;
}