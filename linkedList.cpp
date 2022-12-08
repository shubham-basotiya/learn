#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    struct node * link;
};

struct node * head = NULL;

void addFront(int value){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = value;
    if(head == NULL){
        newNode->link = NULL;
        head = newNode; 
    } else{
        newNode->link = head;
        head = newNode;
    }

    cout << "New element insert successfully" << endl;
}

void addLast(int value){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->link = NULL;
    if(head == NULL){
        newNode->link = NULL;
        head = newNode;
    } else{
        struct node * temp = head;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = newNode;
    }
    cout << "new element insert successfully!" << endl;
}

void addRandom(int value, int loc1, int loc2){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    if(head ==  NULL){
        newNode->link = NULL;
        head = newNode;
    } else {
        struct node * temp = head;
        while(temp->data != loc1 && temp->data != loc2)
        temp = temp->link;
        newNode->link = temp->link;
        temp->link = newNode;
    }
    cout<< "New element inserted successfully" << endl;
}

void deleteTop(){
    if(head == NULL){
        cout << "list is empty" << endl;
    } else {
        struct node * temp = head;
        head = temp->link;
        free(temp);
        cout << "Remove top element successfully" << endl;
    }

}

void deleteLast(){
    if(head == NULL){
        cout << "list is empty" << endl;
    } else {
        struct node * temp = head;
        struct node * temp1;

        if(head->link == NULL){
            head = NULL;
        }
        else {
        while(temp->link != NULL){
            temp1 = temp;
            temp = temp->link;
        }
        temp1->link = NULL;
        free(temp);
        // free(temp1);
        cout << "Last node deleted successfully" << endl;
        }
    }
   
}

void deleteRandom(int value){
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

void searchList(int value){
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
        cout << "1. Add at the beginning of list" << endl;
        cout << "2. Add at the end of list" << endl;
        cout << "3. Add at the random position of list" << endl;
        cout << "4. Delete the value from  top position of list" << endl;
        cout << "5. Delete the value from  last position of list" << endl;
        cout << "6. Delete the value from  random position of list" << endl;
        cout << "7. Search item in the list" << endl;
        cout << "8. Display List" << endl;
        cout << "9. Exit" << endl;

        int opt, value, loc1, loc2;
        cout << "\nChoose option from above options : ";
        cin>>opt;

        switch(opt){
            case 1:
                    cout << "Enter the value that you want to store in the list :";
                    cin>>value;
                    addFront(value);
                    break;
            case 2:
                    cout << "Enter the value that you want to store in the list :";
                    cin>>value;
                    addLast(value);
                    break;
            case 3:
                    cout << "Enter the value that you want to store in the list :";
                    cin>>value;
                    cout << "Enter the two values where you want to insert : ";
                    cin>>loc1>>loc2;
                    addRandom(value, loc1, loc2);
                    break;
            case 4:
                    deleteTop();
                    break;
            case 5:
                    deleteLast();
                    break;
            case 6:
                    cout << "Enter that value that you want to delete from the list : ";
                    cin>>value;
                    deleteRandom(value);
                    break;
            case 7:
                    cout << "Enter the value that you want to search in the list" << endl;
                    cin>>value; 
                    searchList(value);
                    break;
            case 8:
                    displayList();
                    break;
            case 9:
                    exit(1);
            default:
                    cout<<"Please choose correct option" << endl;
        }
    }
    return 0;
}