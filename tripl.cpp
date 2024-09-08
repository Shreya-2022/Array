#include<iostream>
using namespace std;
int main(){
    int array[]={3,6,5,1,7,8,9};
    int size = 6;
    int targetsum =23;
    int triplets = 0;
    // 2 loop ko contant rakh ke ek loop  ko move krenge
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k = j+1;k<size;k++){
                if(array[i]==targetsum){
                    triplets++;



                }
            }
        }
    }
    cout<<triplets<<endl;
    return triplets;

}