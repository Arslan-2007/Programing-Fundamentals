#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr;
    int num;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        bool alreadyEntered = false;

        // Check if number already exists
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == num) {
                alreadyEntered = true;
                break;
            }
        }

        if (alreadyEntered) {
            cout << "Already Entered" << endl;
        } else {
            arr.push_back(num);
        }
    }

    // Optional: display stored unique numbers
    cout << "\nStored numbers are: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}