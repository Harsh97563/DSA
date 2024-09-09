#include <iostream>

using namespace std;


int main() {

    int arr[] = {13, 77, 33, 23, 2, 75};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i<n-2; i++) {

        for(int j=0; j<n; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++ ) {
        cout << arr[i] << " ";
    }

    cout << endl;



    return 0;
}