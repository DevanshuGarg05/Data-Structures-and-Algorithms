#include<bits/stdc++.h>
using namespace std;


void arrSwap(int arr[],int i, int n){

    if(i>= n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    arrSwap(arr,i+1,n);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    arrSwap(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}