// Fibonacci

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f1 = 0, f2 = 1, next;
    cout << f1 << endl << f2 << endl;
    for(int i = 2; i<n; i++){
        next = f1 + f2;
        cout << next << endl;
        f1 = f2;
        f2 = next;
    }
    return 0;
}