#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    // while(t--)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     if(x >= (y*2))
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    // }

    while(t--){
        int x,y,k, steps, gap;
        cin>>x>>y>>k;
        if(x == y) {
            cout << 0 << endl;
        }
        else if(x > y){
            gap = x-y;
            steps = gap/k;
            if((y+steps*k) < y){
                steps++;
                cout<< steps << endl;
            } else{
                cout << steps << endl;
            }
        } else {
            gap = y-x;
            steps = gap/k;
            if((y+steps*k) < x){
                steps++;
                cout<< steps << endl;
            } else{
                cout << steps << endl;
            }

        }
    }
    return 0;
}