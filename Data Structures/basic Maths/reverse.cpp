#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int revNum = 0;
    while(n>0){
        int lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n = n/10;
    }
    return revNum;

}



int main(){

    int n;
    cin>>n;

    cout<<reverse(n);
}