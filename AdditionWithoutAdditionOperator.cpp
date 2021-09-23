#include <iostream>
using namespace std;

int Add(int &a, int &b)
{
    // Iterate till there is no carry
    while (b != 0)
    {
        
        // carry now contains common set bits both numbers
        unsigned carry = a & b; // Carry Variable should be unsigned to deal with the -ve numbers
 
        // Sum of bits of both numbers where at least one of the bits is not set
        a = a ^ b;
 
        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    
    // When iteration finished i.e. no carry is left, a must have the req. sum
    return a;
}

int main()
{
	int a = -5, b = 10;
    cout << "Sum of the numbers is: " << Add(a, b) << endl;
    return 0;
}
