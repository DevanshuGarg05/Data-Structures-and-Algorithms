#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    int n= nums.size();

    // brute force approach
    // set<vector<int>> ans;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         for(int k=j+1; k<n; k++){
    //             if(nums[i]+nums[j]+nums[k]==0){
    //                 vector<int> temp = {nums[i], nums[j], nums[k]};
    //                 sort(temp.begin(), temp.end());
    //                 ans.insert(temp);
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> result(ans.begin(), ans.end());
    // return result;



    //better approach
    // using hashset
    // set<vector<int>> st;
    // for(int i=0; i<n; i++){
    //     set<int> hashset;
    //     for(int j=i+1; j<n; j++){
    //         int third = -(nums[i] + nums[j]);
    //         if(hashset.find(third)!= hashset.end()){
    //             vector <int> temp = {nums[i], nums[j], third};
    //             sort(temp.begin(), temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(nums[j]);
    //     }
    // }
    // vector<vector<int>> result(st.begin(), st.end());
    // return result;


    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i<n;i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];

            if(sum<0){
                j++;
            }else if(sum>0){
                k--;
            }else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && nums[j] == nums[j-1]){
                    j++;
                }
                while(j<k && nums[k] == nums[k+1]){
                    k--;
                }
            }
        }
    }
    return ans;
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
    vector<vector<int>> ans = threeSum(nums);

    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}