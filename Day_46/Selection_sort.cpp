#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int smallest = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

int main() {
    int arr[] = {12, 52, 87, 74, 10};
    int n = 5;

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
