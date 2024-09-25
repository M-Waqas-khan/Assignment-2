/* Write a C++ class that is derived from the Progression class to produce a progression
where each value is the square root of the previous value. (Note that you can no longer 
represent each value with an integer.) You should include a default constructor that 
starts with 65,536 as the first value and a parametric constructor that starts with 
a specified (double) number as the first value.  */
#include <iostream>
#include <cmath>
using namespace std;
class SquareRootProgression 
{
    double current;
public:
    SquareRootProgression(double start = 65536)  
    {
        current = start;
    }
    // Returns the next value in the progression
    double nextValue() 
    {
        return sqrt(current);
    }

    // Prints the first 'n' values of the progression
    void printProgression(int n) 
    {
        for (int i = 0; i < n; ++i) 
        {
            cout << current << ' ';  // Print the current value
            current = nextValue();         // Update to the next value
        }
        cout << endl;  // New line after printing all values
    }
};

int main() {
    SquareRootProgression prog1;      // Default constructor
    cout << "First Progression: ";
    prog1.printProgression(10);       // Print first 10 values

    SquareRootProgression prog2(100); // Parametric constructor
    cout << "Second Progression: ";
    prog2.printProgression(10);       // Print first 10 values
    return 0;
}
