#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

/*
int linearSearch(int arr[], int searchElement, int n){
    int searchResult = -1;
    for(int i = 0; i <= n; i++){
        if(arr[i] == searchElement){
            searchResult = i+1;
            return searchResult;
        }
    }
    if(searchResult == -1){
        return searchResult;
    }
}
*/


int binarySearch(int arr[], int lower, int higher, int searchElement){
    int searchResult = -1;
    
    while(lower <= higher){

        int mid  = (lower+higher)/2;

        if(arr[mid] == searchElement){
            searchResult = mid;
            return searchResult+1; 
        }
        else if(arr[mid] < searchElement){
            lower = mid+1;
        }
        else{
            higher = mid-1;
        }
    }
        return searchResult;
}

int main(){
    int searchElement, n;
    cout << "Enter the number of element : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout << "Enter the element that you want to search in array : " << endl;
    cin>>searchElement;

    bubbleSort(arr, n);

    cout << "Sorted Array : ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 

    // cout << "Result is " << linearSearch(arr, searchElement, n) << endl;

     cout << "Result is " << binarySearch(arr, 0, n-1, searchElement) << endl;

    return 0;
}