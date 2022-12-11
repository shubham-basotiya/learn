#include <iostream>
using namespace std;

// find maximum value in array in O(n) time complexity

/*
int main(){
    int n;
    bool flag = false;
    cout << "Enter the size of array :";
    cin>>n;
    
    int *arr = new int[n];

    cout <<"Enter values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    cout <<"Your array :-" << endl;

    for(int j = 0; j < n; j++){
        cout << "arr[" << j << "] = " << arr[j] << endl; 
    }
    
    cout << "Enter ith index to find maximum value : ";

    int another_i;

    cin>>another_i;

    int max_ele = -999999;

    for(int i = 0; i <= another_i; i++){
        if(max_ele < arr[i]){
            max_ele = arr[i];
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Maximum value till ith index in the array : " << max_ele << endl;
    }

    return 0;
}

*/

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin>>n;

    int * arr = new int[5];

    return 0;
}