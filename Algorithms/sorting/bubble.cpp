// it pushes maximum to the last, by adjacent swaps



#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=n-1;i>=0;i--){
        int didSwap =0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap =1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
    // 0(N^2) worst case 
    // best 0(N)
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}