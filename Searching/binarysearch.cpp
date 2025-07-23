#include<iostream>

using namespace std;

int binarySearch(int *arr, int n, int key){
    int low = 0;
    int high = n-1;


    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return -1;


}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(int);
    int key = 5;

    int result = binarySearch(arr, n, key);

    if(result != -1){
        cout<<"The element is present in: "<<result<<" index"<<endl;
    }else{
        cout<<"The element is not present in the array"<<endl;
    }

}