#include <iostream>
#include <string>
using namespace std;


int size;

int *arr = NULL;


void displayArray(int *arr, int &size){
    if(size < 0){
        cout << "List is empty"<<endl;
        return;
    }
    for(int i = 0; i< size; i++){
        cout << "arr[" << i << "] = " <<*(arr+i) << endl;
    }
    cout << endl;
}

void addTop(int * arr, int &size, int value){
    if(arr[0] == 0){
        arr[0] = value;
    }
    else {
        size++;
        for(int i = size; i >= 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = value;
    }

}

void deleteTop(int * arr, int &size){
    if(size-1 == 0 && arr[size-1] == 0){
        cout << "list is already empty" << endl;
        return;
    }
    else if(arr == NULL){
        cout << "list is empty"<< endl;
        return;   
    }
    else 
    {
        for(int i = 0; i < size; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
}


void updateTop(int *arr, int &size, int value){
    if(size-1 == 0 && arr[size-1] == 0){
        arr[0] = value;
    }
    else if(size < 0){
        size++;
        arr[size] = value;
    }
    else {
        arr[0] = value;
        cout << "list top element successfully updated!" << endl;
    }
}

void addLast(int * arr, int &size, int value){
    if(arr[size-1] == 0){
        arr[size-1] = value;
    } else {
        size++;
        arr[size-1] = value;
    }
}

void deleteLast(int *arr, int &size){
    if(size-1 < 0 && arr[size-1] == 0){
        cout << "list already empty" << endl;
        return;
    } 
    else if(arr == NULL){
        cout << "list is empty" << endl;
        return;
    }
    else 
    {
        arr[size-1] = 0;
        size--;
    }
}

void updateLast(int *arr, int &size, int value){
    if(arr[size-1] == 0 ){
        arr[size-1] = value;
    }
    else if(size < 0){
        size++;
        arr[size] = value;
    }
    else {
        arr[size-1] = value;
    }
}

void addRandom(int * arr, int &size, int value){
    int position;
    cout << "Enter the position where you want to insert new value : ";
    cin>>position;

    if(position <= size-1){
        if(position == 0){
            addTop(arr, size, value);
        }
        else if(size == position){
            addLast(arr, size, value);
        } else {
            if(arr[position] == 0){
                arr[position] = value;
            }
            else{
                size++;
                for(int i = size; i >= position; i--){
                    arr[i] = arr[i-1];
                }
                arr[position] = value;
            }
        }
    } else {
        cout << "Please enter the correct position" << endl;
        return;
    }
}

void deleteRandom(int *arr, int &size, int value){
    if(size == 0 && arr[size] == 0)
    {
        cout << "list already empty" << endl;
        return;
    }
    else
    {
        int status = false;
        for(int i = 0;i < size; i++){
            if(arr[i] == value){
                status = true;
                int position = i;
                for(int j = position; j <= size-1; j++){
                    arr[j] = arr[j+1];
                }
            }
        }
        if(status == false){
            cout << "This value is not present in the array" << endl;
            return;
        }
        else {
            size--;
        }
    }
}

void updateRandom( int * arr, int &size, int value){
    bool status = false;
    int newValue;
    cout << "Enter new value that you want update : ";
    cin>>newValue;
    for(int i = 0; i< size; i++){
        if(arr[i] == value){
            status = true;
            arr[i] = newValue;
        }
    }
    if(status == false){
        cout << "This value is not present in the array" << endl;
        return;
    } else {
        cout << "Updated list successfully" << endl;
        return;
    }
}

void initArray(int *arr, int &size){
        for(int i = 0; i < size; i++){
        *(arr+i) = 0;
    }
}


int main(){
    
    // Dynamic array

    cout << "Enter the size of array :";
    cin>>::size;

    arr = new int[::size];

    initArray(arr, ::size);

    // for(int i= 0; i < n; i++){
    //     cout << "Address of arr[" << i << "] = " << arr+i << " and value of arr[" << i << "] = " <<  *(arr+i) << endl;
    // }
    bool conn = true;

    while(conn)
    {
        cout << "\n1. Add new element from top position "<< endl; 
        cout << "\n2. Add new element to last position " << endl;
        cout << "\n3. Add new element to random positon " << endl;
        cout << "\n4. Delete new element from top position "<< endl; 
        cout << "\n5. Delete new element to last position " << endl;
        cout << "\n6. Delete new element to random positon " << endl;
        cout << "\n7. Update top element from array " << endl;
        cout << "\n8. Update last element from array " << endl;
        cout << "\n9. Update random element from array " << endl;
        cout << "\n10. Display Array" << endl;
        cout << "\n11. Exit" << endl;
        int con, value;
        cout << "choose an option from above options : ";

        cin>>con;

        switch(con)
        {
            case 1:            
                    cout << "Enter the value that you want to add in array : ";
                    cin>>value;
                    addTop(arr, ::size, value);
                    break;
            case 2:
                    cout << "Enter the value that you want to add in array : ";
                    cin>>value;
                    addLast(arr, ::size, value);
                    break;
            case 3:
                    cout << "Enter the value that you want to add in array : ";
                    cin>>value;
                    addRandom(arr, ::size, value);
                    break;
            case 4:            
                    deleteTop(arr, ::size);
                    break;
            case 5:            
                    deleteLast(arr, ::size);
                    break;
            case 6:  
                    cout << "Enter the value that you want to delete in array : ";
                    cin>>value;          
                    deleteRandom(arr, ::size, value);
                    break;
            case 7:            
                    cout << "Enter the value that you want to update in array : ";
                    cin>>value;
                    updateTop(arr, ::size, value);
                    break;
            case 8:            
                    cout << "Enter the value that you want to update from array : ";
                    cin>>value;
                    updateLast(arr, ::size, value);
                    break;
            case 9:            
                    cout << "Enter the value that you want to update from array : ";
                    cin>>value;
                    updateRandom(arr, ::size, value);
                    break;
            case 10:
                    displayArray(arr,::size);
                    break;
            case 11:
                    conn = false;
                    exit(1);
            default:
                    cout << "please choose correct option from menu";

        }
    }


    return 0;
}