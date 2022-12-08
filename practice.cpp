#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
#include <cstdlib>
using namespace std;

/*
int fact(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial = factorial * i;
    }
    return factorial;
}
*/

// int main(){

    //1
    //1 1
    //1 2 1 
    //1 3 3 1
    //1 4 6 4 1

/*
    int n;
    cin>>n;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j <= i; j++){
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout<<endl;
    }
*/


// int i = 2;
// int *pi = &i;

// cout << i << " " << &i << " " << pi << " " << &pi << " " << *pi << endl;

// *pi = 3;

// cout << i << " " << &i << " " << pi << " " << &pi << " " << *pi << endl;


// int i; char c[10];

// i = sizeof c;

// cout << i << " " << c << endl;

// cout << "size of char " << sizeof(char) << endl;
// cout << "size of int " << sizeof(int) << endl;
// cout << "size of short int " << sizeof(short int) << endl;
// cout << "size of long int " << sizeof(long int) << endl;
// cout << "size of float " << sizeof(float) << endl;
// cout << "size of double " << sizeof(double) << endl;
// cout << "size of bool " << sizeof(bool) << endl;
// cout << "size of int * " << sizeof(int *) << endl;
// cout << "size of char * " << sizeof(char *) << endl;
// cout << "size of short int * " << sizeof(short int *) << endl;
// cout << "size of long int * " << sizeof(long int  *) << endl;
// cout << "size of float * " << sizeof(float *) << endl;
// cout << "size of bool * " << sizeof(bool *) << endl;

// int arr[] = {2, 4, 6};

// cout << arr <<" "<< &arr[0] << endl;

// if(arr == &arr[0]){
//     cout << *arr << endl;
// }
// else {
//     cout << "not equal" << endl;
// }
// int *pi = arr;

// cout << pi << " = " << *(pi) << endl;
// cout << pi+1 <<  " = " << *(pi+1) << endl;
// cout << pi+2 <<  " = " <<  *(pi+2) << endl; 

    // int a = 10;
    // int *pa = &a;
    // int **ppa = &pa;

    // cout << "address of a = " << &a << endl; 
    // cout << "address hold by pa pointer = address of a " << pa << endl; 
    // cout << "address hold by ppa pointer = address of a " << **(&ppa) << endl; 
    // cout << "address of pa pointer = " << &pa << endl;
    // cout << "address hold by ppa pointer = " << ppa << endl; 

    // cout << "value of a = " << a << endl;
    // cout << "value of a by dereferencing (pa pointer )" << *pa << endl;
    // cout << "value of a by dereferencing (ppa pointer )" << **ppa << endl;

    // int *ptr1, *ptr2, array[3], i;
    // array[0] = 2;
    // array[1] = 4;
    // array[2] = 6;
    // ptr1 = array;
    // ptr2 = ptr1;

    // for(int i = 0; i <= 2; i++){
    //     *(ptr1+1) = i+3;
        
    // cout << "Address of arr[" << i << "] = " << ptr1+i << " and value of arr [" << i << "] = " << *(ptr1+1) << endl;
    //     // cout << *(ptr1+1) << endl;
    // }

    // if(ptr1 == ptr2){
    //     cout << ptr1 << " == " << ptr2 << " ptr1 and ptr2 point to the same variable address " << endl;
    // } else {
    //     cout << "ptr1 and ptr2 are not same" << endl;
    // }


    // (ptr2+1);

    // cout << "Address of ptr2 = " << ptr2 << " and Value of ptr2 = " << *ptr2 << endl; 


    // ptr2= ptr2 +2;

    // cout << "Address of ptr2 = " << ptr2 << " and Value of ptr2 = " << *ptr2 << endl; 

    // if(ptr1 == ptr2){
    //     cout << ptr1 << " == " << ptr2 << " ptr1 and ptr2 point to the same variable address " << endl;
    // } else {
    //     cout << "ptr1 and ptr2 are not same" << endl;

    //     int i = ptr2 - ptr1;

    //     cout << i << endl;
    // }

    // void greet(void) {
    //     cout << "Ave user!" << endl;
    // }

    // void greet_many_times(int how_many_times) {
    // while (how_many_times > 0) {
    //     greet();
    //     how_many_times--;
    // }
    // }

    
    // int main(){


    // int size_of_ego;

    // cout << "How big is your ego? [km]" << endl;
    // cin >> size_of_ego;
    // greet_many_times(1 + size_of_ego);

// float fahrenheit_to_celsius(int feh){
//     return ((feh - 32) * 5.0/9.0);
// }

// void showResult(){
//     cout << "convert feh. to cel." << fahrenheit_to_celsius(32.0) << endl;
//     cout << "convert feh. to cel." << fahrenheit_to_celsius(212.0) << endl;
//     cout << "convert feh. to cel." << fahrenheit_to_celsius(451.0) << endl;
// }


// void function_call(int* test){
//     *test = 4;
//     cout << *test << "test value in function " << endl;
// }

// void function_call(int& test){
//     test = 4;
//     cout << test << "test value in function " << endl;
// }

// void new_greet(string greet, int repeats = 1) {
//   for (int i = 0; i < repeats; i++)
//     cout << greet << i << endl;
// }

// inline int giveMeSquare(int n){
//     return n*n;
// }

// int getNumberType(int n){
//     cout << "int " << endl;
//     return n;
// }

// float getNumberType(float n) {
//     cout << "float " << endl;
//     return n;
// }

// int maxOutOfTwo(int num1, int num2){
//     return (num1 > num2 ? num1 : num2);
// }

// int maxOutOfThree(int num1, int num2, int num3){
//     return (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
// }

// int main(){

    // showResult();

    // int test = 2;

    // cout << test << "test value " << endl;

    // // function_call(&test);
    // function_call(test);

    // cout << test << "test value " << endl;

//   new_greet("Hello", 2);
//   new_greet("Good morning");
//   new_greet("Hi", 1);

// cout << giveMeSquare(3) << endl;

// cout << getNumberType(1);
// cout << getNumberType(1.10f);

// cout << maxOutOfTwo(51,64) << endl;
// cout << maxOutOfThree(651, 164, 78) << endl;

// int n;

// int *p;
// cout << "Enter the number of elements that you want to store : " << endl;
// cin >> n;

// p = new int[5];

// for(int i = 0; i < n; i++){
//     cin >>*(p+i);
// }

// for(int i = 0; i < n; i ++){
//     cout << *(p+i) << " ";
// }

// cout <<endl;

// for(int i = 0; i < n; i+=2){
//     cout << *(p+i) << " ";
// }


    // int arr[3] = {1,2,3};

    // for(int i = 0; i <= 4; i++){
    //     cout << "address of arr[" << i << "] = " << arr+i << " and value of arr[" << i << "] = " << arr[i] << endl; 
    // }

    // cout << "address of next arr[3] arr = " << &arr+1 << endl;

    // int arr[5] = {1,2,3,4,5};
    // int (* ptarr)[5]= &arr;

    // cout << "address of arr" << arr << endl;
    // cout << "address of arr[0]" << *ptarr << endl;
    // cout << "value at arr[0]" << **ptarr << endl;
    // cout << "value at arr[0]" << **ptarr+1 << " and address of arr[1] = " << *ptarr+1 << endl;
    // cout << "value at arr[0]" << **ptarr+2 << " and address of arr[1] = " << *ptarr+2 << endl;
    // cout << "value at arr[0]" << **ptarr+3 << " and address of arr[1] = " << *ptarr+3 << endl;
    // cout << "value at arr[0]" << **ptarr+4 << " and address of arr[1] = " << *ptarr+4 << endl;
    // cout << "value at arr[0] = " << *ptarr+5 << " and next block of arr[5] BASE ADDRESS " << ptarr+1 << endl;


    // int a = 3, b = 5, c =7, d =9, e = 11;
    
    // int *arr[5];

    // arr[0] = &a;
    // arr[1] = &b;
    // arr[2] = &c;
    // arr[3] = &d;
    // arr[4] = &e;

    // for(int i=0;i<5;i++){
    //     cout << "arr[" << i << "] = "  << arr[i] << endl;
    // } 

    // int arr[3][3];

    // int *ptr = &arr[0][0];
    
    //  cout << " address of arr= " << &arr  << " and pointer ptr value that hold arr =  " << ptr << endl; 

    // for(int i = 0; i < 9; i++){
    //     *(ptr+i) = i+1;
    // }


    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // char name[] = "hello";
    // int i;
    // // cout << name[0] << endl;

    // int len = sizeof(name) - 1;
    // cout << len << endl;
    // for(i = len; i >= 0; i--){
    //     for(int j = i; j >= 0; j--){
    //     cout << name[i] << endl;
    //     }
    //     cout<< endl;
    // }
    
    // Beep(150, 3000);

    // int helloW(int x, int y){
    //     return x+y;
    // }

        // void addressOfA(int a){
        //     cout << &a << endl;
        // }

        // int qyub(int n){
        //     return n*n*n;
        // }

    // int main(){
    
    // int (*fptr)(int , int);

    // fptr = helloW;

    // cout << (*fptr)(10, 35);

    // int a = 10;

    // cout << "before address of a = " << &a  << " and after address = ";
    // addressOfA(a);


    // int i,n,a,t;
    // a=0;
    // cout<<"Enter number : ";
    // cin>>n;
    // cout << n << endl;
    // for(i = n; i > 0; i/=10){
    //     cout << i%10 << endl;
    //     t = i%10;
    //     cout << t << " " << qyub(t) << endl;
    //     a += qyub(i%10);
        
    // }

    // if(n == a){ 
    //     cout << n << " is a armstrong number" << endl;
    // } else {
    //     cout << n << " is not a armstrong number" << endl;
    // }

    // string string;

    // string = "Hello World";

    // cout << "string = " << string << endl;

    // void *pi = NULL ;

    // int i = 4;

    // pi = &i;

    // cout << "integer value pi " << &i << " = " <<  *(typeid(i).name() *)pi << endl;

    // cout << typeid(i).name() << endl;

    // int main(){

    // int n;
    // cout << "enter the size of array : ";
    // cin>>n;

    // // int *pi = (int *)malloc(n*sizeof(int));
    // int *pi = (int *)calloc(n, sizeof(int));

    // for(int i = 0; i < n; i++){
    //     cout << "pi["<<i<<"]= " << pi[i] << endl;
    // }

    // for(int i = 0; i < n; i++){
    //     cin>>pi[i];
    // }

    // for(int i = 0; i < n; i++){
    //     cout << "pi["<<i<<"]= " << pi[i] << endl;
    // }


    // int main(){

    //     int n;

    //     cout << "Enter your name : ";
    //     cin
    //     cout << "Enter the size of string : ";
    //     cin>>n;

    //     char *cs = (char *)malloc(n*sizeof(char));

    // int main(){

        // int n;

        // cout << "Enter the number of row : ";
        // cin>>n;

        // for(int i = n; i >= 1;i--){
        //     for(int j = 1; j <= n; j++){
        //         if(j >= i){
        //             cout << j;
        //         } else {
        //             cout << " ";
        //         }
        //     }
        //     for(int k = n-1; k >= i; k--){
        //         cout << k ;
        //     }
        //     cout<<endl;
        // }

    // struct node{
    //     int data;
    //     struct node* link;
    // };

    // void addBeg(struct node ** head, int value){
    //     struct node * newNode = (struct node *)malloc(sizeof(struct node));
    //     newNode->data = value;
    //     newNode->link = NULL;

    //     if(head == NULL){
    //         *head = newNode;
    //     }
    //     else{
    //         newNode->link = *head;
    //         *head = newNode;
    //     }
    // }

    // void addLast(struct node ** head, int value){
    //     struct node * newNode = (struct node *)malloc(sizeof(struct node));
    //     newNode->data = value;
    //     newNode->link = NULL;

    //     struct node * temp = *head;

    //     while(temp->link != NULL){
    //         cout << temp->data << " ";
    //         temp = temp->link;
    //     }
    //     temp->link = newNode;
    // }

    // void displayList(struct node * head){
    //     struct node * temp = head;

    //     while(temp != NULL){
    //         cout << temp->data << " ";
    //         temp = temp->link;
    //     }
    // }

    // int main(){

    //     struct node * head = NULL;
    //     // struct node * newNode = (struct node *) malloc(sizeof(struct node));

    //     // cout << head << endl;

    //     // newNode->data = 40;
    //     // newNode->link = NULL;
    //     // head = newNode;

    //     // cout << head << endl;
    //     // cout << head->data << " " << head->link << endl;
    //     // cout << head->data << head->link << endl;

    //     bool status = true;

    //     while(status){
    //         cout << "1. Add new element at beginning." << endl;
    //         cout << "2. Add new element at last." << endl;
    //         cout << "3. Display Element" << endl;
    //         cout << "4. Exit" << endl;

    //         int opt, value;
    //         cout << "Choose any option from above option : ";
    //         cin>>opt;

    //         switch(opt){
    //             case 1:
    //                     cout << "Enter the value at the beginning og list : ";
    //                     cin>>value;
    //                     addBeg(&head, value);
    //                     break;
    //             case 2:
    //                     cout << "Enter the value at the end of list : ";
    //                     cin>>value;
    //                     addLast(&head, value);
    //                     break;
    //             case 3:
    //                     displayList(head);
    //                     break;
    //             case 4:
    //                     exit(1);
    //             default:
    //                     cout<< "Please correct option from above options" << endl;
    //         }
    //     }

//     int main(){

//         int i=2,j=2,counter=0;
//         while(i<=100)
//         {
//             cout << endl;
//             while(j<=100)
//             {
//                 if(j%i==0){
//                     cout << i << endl;
//                     counter++;
//                 }
//                 j++;

//             }
//                 i++;
//                 if(counter==20) {
//                     break;     
//                 }
//         }
//     return 0;
// }  

// int main(){

//     cout << "check armstrong number " << endl;
//     int n, sum = 0;
//     cout << "Enter number :";
//     cin>>n;
//     int demo_var = n;
//     while(n){
//     int r = n%10;
//     sum = sum + (r * r * r);
//     n = n/10;
//     }
//     if(sum == demo_var) {
//         cout << "Entered number is a armstrong number";
//     }
//     else{
//         cout << "entered number is not a armstrong number";
//     }

//     return 0;

// }

// int main(){

//     cout << "Reverse of a number" << endl;
//     int n;
//     cout << "Enter the number : ";
//     cin>>n;

//     int demo_var = n;

//     int rev = 0;

//     while(n){
//         int rem = n%10;
//         rev = rev * 10 + rem;
//         n = n/10;
//     }

//     cout << "Reverse of number " << demo_var << " = " << rev << endl;
//     return 0;
// }