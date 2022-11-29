#include <iostream>
using namespace std;

void selectionSort(int arr[], int s){
    for(int i = 0; i < s; i++){
        for(int j = i; j < s; j++){
            if(arr[i] > arr[j]){
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {12, 10, 4, 13, 8, 15, 3};
    int s = sizeof(arr)/sizeof(int);

    cout << sizeof(arr) << " " << sizeof(s) << endl;

    selectionSort(arr, s);
    return 0;
}