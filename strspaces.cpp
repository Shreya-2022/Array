#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    cin>>str;  
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            count++;
        }
    }
    cout << "Count of characters (excluding spaces): " << count << endl;

    return 0;
}
