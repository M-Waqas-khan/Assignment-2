/* Most modern C++ compilers have optimizers that can detect simple cases when it is logically 
impossible for certain statements in a program to ever be executed. In such cases, the 
compiler warns the programmer about the useless code. Write a short C++ function that 
contains code for which it is provably impossible for that code to ever be executed, 
but your favorite C++ compiler does not detect this fact. */
#include <iostream>
using namespace std;
void Unreachable() 
{
    int x;
    // Ask user for input
    cout << "Enter a non-negative integer: ";
    cin >> x;
    // This condition is logically impossible since we expect x to be non-negative
    if (x < 0) 
    {
        cout << "This will never print because x is always non-negative." << endl;
    } 
    else 
    {
        cout << "x is non-negative: " << x << endl;
    }
    // Unreachable code due to the previous condition
    if (x < 0) 
    {
        cout << "This line is also unreachable." << endl; // This will never execute
    }
    // Some other logic that will always execute
    cout << "This line executes." << endl;
}
int main() {
    Unreachable();
    return 0;
}
