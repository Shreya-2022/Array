#include <iostream>
#include <limits.h>  // For INT_MIN
using namespace std;

// Function to find the second largest element in the array
int secondLargestElement(int array[], int size) {
    if (size < 2) {
        // Not enough elements to find the second largest
        cout << "Array must contain at least two elements." << endl;
        return INT_MIN;
    }

    int max = INT_MIN; // Initialize max to the smallest possible integer value
    int second_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            second_max = max; // Update second_max before updating max
            max = array[i];   // Update max to the new largest value
        } else if (array[i] > second_max && array[i] < max) {
            second_max = array[i]; // Update second_max if current element is between max and second_max
        }
    }

    if (second_max == INT_MIN) {
        // No valid second largest value found
        cout << "No second largest element found." << endl;
        return INT_MIN;
    }

    return second_max; // Return the second largest element
}

int main() {
    int array[] = {2, 3, 5, 7, 1, 7};
    int size = sizeof(array) / sizeof(array[0]); // Calculate size of the array

    int result = secondLargestElement(array, size);
    if (result != INT_MIN) {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
