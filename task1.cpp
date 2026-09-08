#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num[5]={2,4,6,8,10};
    //update the third element 
    num[2]= 7;

    // using loop to show all the elements 
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";

    }
    cout<<"\n";
}