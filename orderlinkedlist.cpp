#include <iostream>
using namespace std;

struct node {
    int data;
    struct node * link;
};

struct node * head = NULL;

void addItem(int value){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->link = NULL;
    if(head == NULL){
        newNode->link = NULL;
        head = newNode;
    } else{
        struct node * temp = head;//Ist node
            struct node * temp1;//IInd node
            while(temp && temp->data < value){
                    temp1 = temp;
                    temp = temp->link;
            }
            if(temp == head ){
                newNode->link = head;
                head = newNode;
            }
            else{
                newNode->link = temp1->link;
                temp1->link = newNode;
                return;
            }
        }
    cout << "new element insert successfully!" << endl;
}

void deleteItem(int value){
    if(head == NULL){
        cout << "list is empty" << endl;
    } else {
        struct node * temp = head, *temp2;
        while(temp->data != value){
            if(temp->link == NULL){
                cout << "This value is not present in the list" << endl;
                return;
            } else{
                temp2 = temp;
                temp = temp->link;
            }
        }
        temp2->link = temp->link;
        free(temp);
        cout << "This value removed from list successfully" << endl;
    }
}

void searchItem(int value){
    struct node * temp = head;
    int counter = 1;
    if(head == NULL){
        cout << "Linked list is empty" << endl;
    }
    else {
        while(temp != NULL){
            
                if(temp->data == value){
                    cout << "your search item is present at position :" << counter++<< endl;
                    return;
                }
                temp = temp->link;
                counter++;
        }
        cout<< "This value is not present in the list" << endl;
    }
}

void displayList(){
    struct node * temp = head;

    if(head == NULL){
        cout << "\nLinked list is empty" << endl;
    } else {
        while(temp != NULL){
            cout << temp->data << "-->";
            temp = temp->link;
        }
        cout << "NULL" << endl;
    }

}


int main(){

   bool status = true;
    while(status){
        cout << "1. Add item in the list" << endl;
        cout << "2. Delete item from the list" << endl;
        cout << "3. Search item in the list" << endl;
        cout << "4. Display List" << endl;
        cout << "5. Exit" << endl;

        int opt, value, loc1, loc2;
        cout << "\nChoose option from above options : ";
        cin>>opt;

        switch(opt){
            case 1:
                    cout << "Enter the value that you want to store in the list : ";
                    cin>>value;
                    addItem(value);
                    break;
            case 2:
                    cout << "Enter the value that you want to store in the list : ";
                    cin>>value;
                    deleteItem(value);
                    break;
            case 3:
                    cout << "Enter the value that you want to search in the list : ";
                    cin>>value; 
                    searchItem(value);
                    break;
            case 4:
                    displayList();
                    break;
            case 5:
                    exit(1);
            default:
                    cout<<"Please choose correct option" << endl;
        }
    }
    return 0;
}