
#include<bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){

int len1=arr1.size();
int len2=arr2.size();

int i=0,j=0,k=0;
vector<int>result(len1+len2);
                                      ////arr1[]=2 4 6 10      result = { 1,2,3,4,5,6,10 }

while(i<len1 && j<len2){              //arr2[]=1 3 5
    if(arr1[i]<arr2[j]){
        result[k]=arr1[i];
        i++;
        k++;

    }
    else{
        result[k]=arr2[j];
        k++; 
        j++;

    }

}
  while(i<len1){
    result[k]=arr1[i];
    k++;
    i++;

  }
  while(j<len2){
    result[k]=arr2[j];
    k++;
    j++;
     }
     return result;
  }
  
  
int main(){
    vector<int>mergeArray;
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i]; 
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    mergeArray=merge(arr1,arr2);
    for(int i=0;i<mergeArray.size();i++){
        cout<<mergeArray[i]<<" ";
        

    }
    return 0;


}