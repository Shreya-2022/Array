// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     char ch;
//      for (int i = 0; i < n; i++) {
//         cout << char(arr[i]) << " ";  
//     }
    
//     cout << endl;

//     return 0;
// }








#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << char(arr[i]) << " "; 
    }
    
    cout << endl;

    return 0;
}