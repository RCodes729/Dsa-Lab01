#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of Students: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Number of students. NO Allocation performed!\n";
        return 1;
    }
    int *marks = new int[n];
    for (int i = 0; i < n; ++i)
    {   
        cout<<"Enter Subject Marks for Student "<<i+1<<": ";
        cin >> *(marks + i);
    }
    int total = 0,
        p_count = 0;
    cout << "\n Marks: ";
    for (int i = 0; i < n; ++i)
    {
        cout << *(marks + i) << " ";
        total += *(marks + i);
        if (*(marks + i) < 50)
            p_count++;
    }
    double avg = static_cast<double>(total) / n;
    cout << "\nTotal: " << total;
    cout << "\nAverage: " << fixed << setprecision(3) << avg;
    cout << "\nPass count: " << p_count << '\n';
    delete[] marks;
    marks = nullptr;
    cin.get();
    return 0;
}