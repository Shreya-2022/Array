#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int pairs =0;
    sort(arr.begin(), arr.end());
    int i = 0;
    int j= n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            pairs++;
            i++;j--;
            
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else
        j--;
        
    }
    cout<<pairs<<endl;
    return 0;
    
} 
    