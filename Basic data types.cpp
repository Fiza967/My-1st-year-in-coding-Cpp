#include <iostream>
#include <iomanip> // Required for setprecision

using namespace std;

int main() {
    // 1. Declare the correct basic data types
    int num;
    long long fullNum;
    char ch;
    float f;
    double d;
    
    // 2. Read the values dynamically from HackerRank's input
    cin >> num >> fullNum >> ch >> f >> d;
    
    // 3. Print the values with the exact formatting requested
    cout << num << "\n";
    cout << fullNum << "\n";
    cout << ch << "\n";
    
    // Force float to print with 3 decimal places
    cout << fixed << setprecision(3) << f << "\n";
    
    // Force double to print with 9 decimal places
    cout << fixed << setprecision(9) << d << "\n";
    
    return 0;
}
