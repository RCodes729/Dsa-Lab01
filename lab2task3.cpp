#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int sales[2][3];
    int (*row_ptr)[3]= sales;
    for(int r=0 ;r<2; ++r)
    {
        for (int c=0;c<3;++c){
           do{
            cout<<"Branch "<<r+1<<" Day "<<c+1<<" Sales:";
            cin>>*(*(row_ptr+r)+c);
           }while(*(*(row_ptr+r)+c)<0);
        }
    }
    cout<<"\n--- Sales Table ---";
    for(int r=0;r<2;++r)
    {
        cout<<"\nBranch "<<r+1<<": ";
        for(int c=0;c<3;++c)
        {
            cout<<*(*(row_ptr+r)+c)<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n---Day Totals---\n";
    for(int c=0;c<3;++c)
    {
        int  tot_day=0;
        for(int r=0;r<2;++r)
        {
            tot_day += *(*(row_ptr+r)+c);
        }
        cout<<"Day "<<c+1<< " Total: "<<tot_day<<'\n';
    }
    cin.get();
    return 0;
}