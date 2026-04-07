#include <iostream>

using namespace std;

int main() {
    // Outer loop: iterate through tables from 1 to 12
    for (int table = 1; table <= 12; table++) {
        // Print the table header
        cout << "Table of " << table << ":\n";

        // Inner loop: iterate through the multiples from 1 to 12
        for (int i = 1; i <= 12; i++) {
            // Calculate the product
            int product = table * i;
            // Print the multiplication expression and result
            cout << table << " x " << i << " = " << product << endl;
        }

        // Print a blank line for separation between tables
        cout << endl;
    }

     return 0;
}
