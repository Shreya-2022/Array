
#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += i;  // sum = sum + i
    }
    cout << "Sum: " << sum << endl;

    return 0;
}
