#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int target;
    int pairs=0;
    int n;// number of elememt
    cin>>n;
    for(int i=0;i<n;i++){// snter elements
       int nums
        cin>>nums;
    }
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            pairs++;
        }

        }
    }
    cout<<pairs<<endl;

}
    