#include <iostream>
#include <vector>
using namespace std;

int MinAbsoluteDifference(vector<int>& s) {
    int rightsum=0;
    int totalSum = 0;
    int leftSum = 0;
    int diff = INT_MAX; 
    // total sum of array
    for (int i = 0; i < s.size(); ++i) {
    totalSum += s[i];
}
    
    for (int i = 0; i < s.size() - 1; ++i) {
    leftSum += s[i];
    int rightSum = totalSum - leftSum;
    int diff = abs(leftSum - rightSum);
    
}
   return diff;
   
}
    int main() {
    vector<int> s = {1, 2, 3, 4, 5}; // Example array
    int result = MinAbsoluteDifference(s);
    cout << "absolute difference is: " << result << endl;
    return 0;
}


