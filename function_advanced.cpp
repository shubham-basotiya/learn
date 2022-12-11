#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cout << "Enter the number : "; 
    cin>>n;
    string b;
    while(n/2){
        int rem = n%2;
        b += rem;
        cout << rem << endl;
        n=n/2;
    }

    cout << b << endl;

    // cout << "hello world" << endl;
    return 0;
}