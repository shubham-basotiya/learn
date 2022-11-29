#include <iostream>
using namespace std;

int main();
//void bubbleSort(int arr[], int);

/*
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int swap_element = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap_element;
            }
        }
    }
}
*/

/*
void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}
*/

void insertionSort(int arr[], int n){
    int i , j, temp;
    for(i = 1; i <= n-1; i++){
        j = i;
        while(arr[j-1] > arr[j] && j > 0){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }

    }
}

int main(){
    
    int n;
    cout << "Enter the number of element you want to sort : ";
    cin>>n;

    int arr[20];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // bubble sort working on condition
    // bubbleSort(arr, n);

    //selection sort select element and compare all remaining element then swap smallest element with selected element.
    //selectionSort(arr, n);

    // insertion sor working - every iteration moves an element from unsorted portion to sorted portion until all the elements are sorted in the list.
    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

