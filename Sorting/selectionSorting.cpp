#include <iostream>

using namespace std;


int main() {

    int arr[] = {13, 77, 33, 23, 2, 75};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i <= n-2; i++ ) {
        int min = i;
        for( int j=i; j <= n-1; j++) {

            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<n; i++ ) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}