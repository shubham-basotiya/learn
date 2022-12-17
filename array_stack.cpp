#include <iostream>
using namespace std;

int checkStackStatus(int arr[],int &top, int &size){

    cout << "size = " << size << " and top = " << top << endl;
    // for(int i = 0; i< size)
    if(top == size-1) {
        cout << "stack is full" << endl;
        return 1;
    }
    return 0;
}

int insertStack(int &top, int &size, int arr[], int value){
    cout <<"top = " << top << " and size = " << size << endl;
    if(checkStackStatus(arr, top, size)){
        return 0;
    } else {
        top++;
        arr[top] = value; 
        cout<< "data insert into stack successfully" << endl;
        return 1;
    }
}

int removeStack(int top, int size, int arr[]){
    if(checkStackStatus(arr, top, size)){
        return 0;
    } else {
        arr[top] = 0;
        top--;
        cout << "data removed successfully form the stack" << endl;
        return 1;
    }
}

int main(){

    // stack data structure follows lifo property means last in first out

    // stack implement using array

    int size, value;

    cout << "Enter the size of array/stack : ";
    cin>>size;

    int * arr = new int[size];
    int top = -1;

    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << checkStackStatus(arr, top, size) << endl;

    cout<< "Enter the value that you want to store in stack : ";
    cin>>value;
    insertStack(top, size, arr,value);

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout<< "Enter the value that you want to store in stack : ";
    cin>>value;
    insertStack(top, size, arr,value);

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }


    removeStack(top, size, arr);

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout<< "Enter the value that you want to store in stack : ";
    cin>>value;
    insertStack(top, size, arr,value);

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

        removeStack(top, size, arr);

    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }


    return 0;
}