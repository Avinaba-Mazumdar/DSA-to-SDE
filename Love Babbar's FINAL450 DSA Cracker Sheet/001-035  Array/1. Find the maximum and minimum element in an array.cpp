#include <iostream>
using namespace std;

int main(){
    int arr[] = {100, 1, 76, 2345, 425, 9645};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n == 0){
        cout << "No maximum or Minimum Element" << endl;
    }
    else if(n == 1){
        cout << "Max=" << arr[0] << endl << "Min=" << arr[0] << endl;
    }
    else if(n == 2){
        if(arr[0] > arr[1]){
            cout << "Max=" << arr[0] << endl << "Min=" << arr[1] << endl;
        }
        else{
            cout << "Max=" << arr[1] << endl << "Min=" << arr[0] << endl;
        }
    }

    else if(n > 2){
        int min = arr[0];
        int max = arr[0];
        for (int i=1; i<n; i++){
            if (arr[i] > max)
                max = arr[0+i];
            if (arr[i] < min)
                min = arr[0+i];
        }
        cout << "Max=" << max << endl << "Min=" << min << endl;
    }
}