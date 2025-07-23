#include<iostream>

using namespace std;

void linearSearch(int *arr, int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            cout<<"The Element is in: "<<i<<" index"<<endl;
        }
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    int key = 5;

    linearSearch(arr, n, key);
}