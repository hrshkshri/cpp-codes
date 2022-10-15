// linear serch
#include<iostream>

using namespace std;

int main(){
    int n, x, ind = -1;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            ind = i+1;
            break;
        }
    }
    if(ind == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at " << ind << endl;
    }
    return 0;
}