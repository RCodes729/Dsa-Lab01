#include <iostream>
#include <iomanip>

using namespace std;
int main(){
int arr[10];
for (int i = 0; i < 10; i++) {
    cout << "Enter Integer "<<i+1<<":";
    cin >> arr[i];
    }

    int uniqueCount = 0;

    for (int i = 0; i < 10; i++) {
        bool alreadyExists = false;
        // Check if arr[i] is already in the unique section [0 ... uniqueCount - 1]
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[j] == arr[i]) {
                alreadyExists = true;
                break;
            }
        }
        if (!alreadyExists) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "Unique values: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTotal unique count:"<<uniqueCount<<"\n";
   cin.get();
   return 0;
}