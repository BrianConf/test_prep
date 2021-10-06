// C++ program to print Pascal's triangle

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int fact(int n) { return n > 1 ? fact(n - 1) * n : 1; }


int main() {
    int r, r_max, i, value;

    cout << "Enter the number of rows of Pascal's Triangle\n";
    cin >> r_max;

    for(r = 0; r < r_max; r++) {
    // Print leading spaces
    for(i = r; i <= r_max; i++)
        cout << "  ";

    for(i = 0; i <= r; i++) {
        value = fact(r)/(fact(i)*fact(r-i));
        cout << "  " << value;
    }
    cout << endl;
    }

    return 0;
}
