#include<iostream>
using namespace std;

void mergeSort(int arr[], int n){

    
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

}