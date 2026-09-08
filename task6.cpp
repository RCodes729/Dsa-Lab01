#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter Integer "<<i+1<<":";
        cin >> arr[i];
    }

    // In-place two-pointer swap
    int start = 0;
    int end = 5;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cin.get();
    return 0;
}