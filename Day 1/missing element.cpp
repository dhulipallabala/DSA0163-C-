#include <iostream>
#include <vector>

using namespace std;

int findMissingElement(vector<int> &arr, int size) {
    int left = 0, right = size - 1;
    int mid;

    
    while (left <= right) {
        mid = left + (right - left) / 2;

      
        if (arr[mid] != mid + arr[0]) {
            right = mid - 1;
        } else {
            
            left = mid + 1;
        }
    }

    
    return left + arr[0];
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missingElement = findMissingElement(arr, n);
    cout << "The missing element is: " << missingElement << endl;

    return 0;
}

