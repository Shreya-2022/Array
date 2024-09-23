#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int size;
    cin>>size;
    vector<int>arr(size);
     for(int i = 0 ; i < size ; i ++){
         cin>>arr[i];
     }
 
//int size=sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(int i=0;i<size;i++){
    sum+=arr[i];
}
cout<<sum<<endl;
return 0;
}

