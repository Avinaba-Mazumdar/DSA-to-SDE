#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a=0, b=n-1, c;
    
    while(a<b){
        c = arr[a];
        arr[a] = arr[b];
        arr[b] = c;
        a++;
        b--;
    }
    for (int i=0; i<n; i++){
        cout << arr[i];
    }
    return 0;
}