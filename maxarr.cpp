#include<iostream>
using namespace std;
int main(){
    int array[] = {2,5,3,8,5};
    int max = array[0];
    for(int i=0;i<4;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
}