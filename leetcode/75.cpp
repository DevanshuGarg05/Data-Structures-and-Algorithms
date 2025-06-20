#include<bits/stdc++.h>
using namespace std;

int sortColours(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){  
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]); 
                high--;
            }
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sortColours(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
 

}