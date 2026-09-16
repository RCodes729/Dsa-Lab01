#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n = 3;
    int *values = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(values + i);
    }

    cout << "Entered values: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(values + i) << " ";
    }
    cout << '\n';

    delete[] values;
    values = nullptr;
    cin.get();
    return 0;
}