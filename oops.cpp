#include <iostream>
using namespace std;

int main(){
    class base {
        public:
        int baseint;

        int getValue(){
            return baseint;
        }

        void setValue(){
            baseint = 5;
        }
    };


    class child extends public base {
        public:
        void display(){
            cout << baseint << endl;
        }
    }

    base onet;
    onet.setValue();
    cout << onet.getValue() << endl;
    return 0;
}