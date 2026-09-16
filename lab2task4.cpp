#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of Rows And cols: ";
    cin>>rows>>cols;
    if(rows<=0 || cols<=0){
        cout<<"Invalid Matrix Dimensions.\n";
        return 1;
    }
    int **marks = new int * [rows];
    for (int r =0 ;r<rows;++r)
    {
        *(marks+r)=new int [cols];
    }

    for(int r=0;r<rows;++r)
    {
        for(int c=0;c<cols;++c)
        {
            cout<<"Marks of Student "<<r+1<<" in subj "<<c+1<<": ";
            cin>>*(*(marks+r)+c);
        }
    }
    cout<<"\n--- Marks Matrix: ---\n";
    for(int r=0;r<rows;++r)
    {
        cout<<"Student"<<r+1<<": ";
        for(int c=0;c<cols;++c)
        {
            cout<<*(*(marks+r)+c)<<" ";
        }
        cout<<"\n";
    }
    int best=0,
        bstd=1;
    for(int c=0;c<cols;++c)
    {
        best +=*(*(marks+0)+c);
    }
    cout<<"\n--- Totals ---\n";
    cout<<"Student 1: "<<best<<'\n';
    for(int r=0;r<rows;++r)
    {
        int ctotal=0;
        for(int c=0;c<cols;++c){
            ctotal=*(*(marks+r)+c);
        }
        cout<<"Student "<<(r+1)<<": "<<ctotal<<'\n';
        if(ctotal>best){
            best=ctotal;
            bstd =r+1;
        }
    }
    cout<<"Top Students: "<<bstd<<" (Total: "<<best<<")\n";
    for(int r=0;r<rows;++r){
        delete [] *(marks+r);
    }
    delete [] marks;
    marks= nullptr;
    cin.get();
    return 0;
}