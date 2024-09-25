/* Write a C++ class that is derived from the Progression class to produce a progression 
where each value is the absolute value of the difference between the previous two values. 
You should include a default constructor that starts with 2 and 200 as the first two 
values and a parametric constructor that starts with a specified pair of numbers as 
the first two values. */ 
#include <iostream>
using namespace std;
#include <cmath> 
class AbsDiffProgression 
{
    int current, prev;  // Variables to store the current and previous values

public:
    // Constructor: initializes with default values of 2 and 200, or specified values
    AbsDiffProgression(int first = 2, int second = 200)
    { 
        prev = first;   // Set previous value
        current = second; // Set current value
    }
    // Method to compute the next value in the progression
    int nextValue() 
    {
        int next = abs(current - prev); // Calculate absolute difference
        prev = current;                  // Update previous value
        current = next;                  // Update current value to next
        return current;                  // Return the new current value
    }
    // Method to print the first 'n' values of the progression
    void printProgression(int n) 
    {
        for (int i = 0; i < n; ++i) // Loop to print 'n' values
        {
            cout << current << ' ';  // Output the current value
            nextValue();             // Calculate the next value for the next iteration
        }
        cout << endl;                // Print a newline after the progression
    }
};
int main() {
    AbsDiffProgression prog1;                             //  default constructor
    cout << "Values of First Propagations are: ";        
    prog1.printProgression(10);                           // Print first 10 values 

    AbsDiffProgression prog2(10, 50);                     // parametric constructor
    cout << "Values of Second Propagations are: ";
    prog2.printProgression(10);                           // Print first 10 values 
}
