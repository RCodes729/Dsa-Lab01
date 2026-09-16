#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;

    cout << "Enter the initial number of students (1-10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Error: Number of students must be between 1 and 10.\n";
        return 1;
    }

    int *marks = new int[n];

    cout << "Enter " << n << " initial marks (separated by space): ";
    for (int i = 0; i < n; ++i)
    {
        cin >> *(marks + i);
    }

    int *new_marks = new int[n + 1];

    for (int i = 0; i < n; ++i)
    {
        *(new_marks + i) = *(marks + i);
    }

    cout << "Enter the mark of the newly joined student: ";
    cin >> *(new_marks + n);

    delete[] marks;
    marks = new_marks;
    new_marks = nullptr;
    n = n + 1;

    cout << "\nAll marks after addition (" << n << " students):\n";
    for (int i = 0; i < n; ++i)
    {
        cout << *(marks + i) << " ";
    }
    cout << '\n';

    delete[] marks;
    marks = nullptr;
    cin.get();
    return 0;
}