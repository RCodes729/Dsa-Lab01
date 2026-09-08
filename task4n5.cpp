#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int arr[8];
    for (int i = 0; i < 8; i++) {
        cout << "Enter Integer "<<i+1<<":";
        cin >> arr[i];
    }

    int minVal = arr[0], minIdx = 0;
    int maxVal = arr[0], maxIdx = 0;

    // Strict inequality (< and >) preserves the first occurrence index
    for (int i = 1; i < 8; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
    // displays the largest and smallest with their indices 
    cout << "Smallest value is  " << minVal << " at index " << minIdx << "\n";
    cout << "Largest value is " << maxVal << " at index " << maxIdx << "\n";
  
   cin.get();
   return 0;
}