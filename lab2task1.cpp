#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int sales[5];
    int *p=sales;
    int total=0;

    for(int i=0;i<5;i++)
    {
        do{
            cout<<"Enter sales for day "<<(i+1)<<": ";
            cin>>*(p+i);
            if(*(p+i)<0)
            cout<<"Value Must be non-negative. Please try Again!";
        }while(*(p+i)<0);
    }
    cout<<"\n--- Initial Sales ---\n";
    for(int i=0; i<5 ; i++){
        cout<<"Day "<<(i+1)<<": "<<*(p+i)<< '\n';
        total += *(p+i);
    }
    cout<<"Total Sales: "<<total<<'\n';
    *(p+2)+=2;
    int upd_total=0;
    cout<<"\n--- Updated Total(+2 to day 3) ---\n";
    for(int i=0;i<5;++i)
    {
        cout<<"Day "<<(i+1)<<": "<<*(p+i)<< '\n';
        upd_total+= *(p+i);
    }
    cout<<"Updated Total Sales: "<<upd_total<<'\n';
    cin.get();
    return 0;
}