

Creating a mask in bits refers to generating a binary number where certain bits are set to 1 (indicating the bits you want to modify or focus on), and other bits are set to 0 (indicating the bits you want to ignore). This mask can then be used in bitwise operations to manipulate specific parts of another binary number.

Example Explanation:
Let's say you want to manipulate bits from position m to n in a 32-bit number. The mask you create will have 1s in positions m to n and 0s elsewhere.

Step-by-Step Mask Creation:
Start with 1 shifted left by (n - m + 1) positions:

This creates a binary number with 1 followed by (n - m + 1) zeros.
For example, if m = 8 and n = 15, (n - m + 1) = 8. So 1 << 8 gives 00000001 00000000 (in binary).
Subtract 1 from this number:

This turns all the zeros following the 1 into 1s, giving a number with exactly 8 ones.
Continuing the example: 00000001 00000000 - 1 gives 00000000 11111111.
Shift this pattern left by m positions:

This aligns the 1s with the desired bit positions from m to n.
For m = 8: shifting 00000000 11111111 left by 8 gives 00001111 11110000.
Now, the mask is ready to be used. It has 1s in the positions from m to n and 0s elsewhere.

Bitwise Operations Using the Mask:
Clearing Bits:

Use the mask with a bitwise NOT (~mask) to clear bits in another number (set them to 0).
Example: number & ~mask clears the bits from m to n in number.
Setting Bits:

Use the mask to set specific bits to a new value.
Example: number | (value & mask) sets the bits in number to the corresponding bits in value.
Practical Example:
Let's apply this to a 32-bit number a = 0xABCDEF00, and suppose you want to modify bits 8 through 15.

Positions: m = 8, n = 15.
Mask: ((1 << (n - m + 1)) - 1) << m.
1 << 8 results in 00000001 00000000.
Subtracting 1 gives 00000000 11111111.
Shifting left by 8 results in 00001111 11110000.
This mask can now be used to isolate, clear, or set the bits from position 8 to 15 in the original number a.
To set the bits from position m to position n in a 32-bit hexadecimal number a to a value x, where x is smaller than 2(𝑛−𝑚)2(n−m) , we can proceed as follows
#include <iostream>
#include <iomanip> // for hex output

using namespace std;

uint32_t setBits(uint32_t a, int m, int n, uint32_t x) {
    // Step 1: Create the mask
    uint32_t mask = ((1U << (n - m + 1)) - 1) << m;

    // Step 2: Clear the bits from m to n in a
    uint32_t a_cleared = a & ~mask;

    // Step 3: Align x to the correct bit position
    uint32_t x_shifted = x << m;

    // Step 4: Set the bits from m to n in a
    uint32_t result = a_cleared | x_shifted;

    return result;
}

int main() {
    uint32_t a;
    int m, n;
    uint32_t x;

    cout << "Enter the 32-bit hexadecimal number (a): ";
    cin >> hex >> a;

    cout << "Enter the start bit position (m): ";
    cin >> m;

    cout << "Enter the end bit position (n): ";
    cin >> n;

    cout << "Enter the value to set (x): ";
    cin >> x;

    uint32_t result = setBits(a, m, n, x);
    cout << "The new value of a after setting bits " << m << " to " << n << " with " << x << " is: " 
         << hex << result << endl;

    return 0;
}
#include <iostream>
#include <iomanip> // for hex output

using namespace std;

uint32_t setBits(uint32_t a, int m, int n, uint32_t x) {
    // Step 1: Create the mask
    uint32_t mask = ((1U << (n - m + 1)) - 1) << m;

    // Step 2: Clear the bits from m to n in a
    uint32_t a_cleared = a & ~mask;

    // Step 3: Align x to the correct bit position
    uint32_t x_shifted = x << m;

    // Step 4: Set the bits from m to n in a
    uint32_t result = a_cleared | x_shifted;

    return result;
}

int main() {
    uint32_t a;
    int m, n;
    uint32_t x;

    cout << "Enter the 32-bit hexadecimal number (a): ";
    cin >> hex >> a;

    cout << "Enter the start bit position (m): ";
    cin >> m;

    cout << "Enter the end bit position (n): ";
    cin >> n;

    cout << "Enter the value to set (x): ";
    cin >> x;

    uint32_t result = setBits(a, m, n, x);
    cout << "The new value of a after setting bits " << m << " to " << n << " with " << x << " is: " 
         << hex << result << endl;

    return 0;
}


To find the minimum number of bit flips required to convert a number 𝐴 A into 𝐵 B, you can follow these steps:

Problem Definition
Given two integers 𝐴 A and 𝐵 B, determine the minimum number of bit flips needed to convert 𝐴 A into 𝐵 
B. A "bit flip" means changing a 0 to 1 or a 1 to 0.

Steps to Solve the Problem
Compute the XOR of 
𝐴
A and 
𝐵
B:

The XOR operation between two bits will yield 1 if the bits are different and 0 if they are the same. Therefore, the XOR of 
𝐴
A and 
𝐵
B will give a binary number where each 1 represents a bit that differs between 
𝐴
A and 
𝐵
B.
Count the Number of 1s in the XOR Result:

The number of 1s in the XOR result will be the number of bits that need to be flipped to convert 
𝐴
A into 
𝐵
B.
Example Code in C++
cpp

#include <iostream>
#include <bitset>

int countBitFlips(int A, int B) {
    // Step 1: XOR the two numbers
    int xorResult = A ^ B;

    // Step 2: Count the number of 1s in the XOR result
    int count = 0;
    while (xorResult != 0) {
        count += xorResult & 1;  // Increment count if the least significant bit is 1
        xorResult >>= 1;          // Shift right to check the next bit
    }

    return count;
}

int main() {
    int A = 29;  // Example number
    int B = 15;  // Example number

    int flips = countBitFlips(A, B);
    std::cout << "Minimum number of bit flips required: " << flips << std::endl;

    return 0;
}
Explanation
Step 1 (XOR Operation):
The XOR operation between 
𝐴
A and 
𝐵
B highlights the differing bits.
Step 2 (Counting 1s):
The loop counts how many 1s are in the XOR result, which directly corresponds to the number of differing bits.


Parallel Bit Count Optimization
Bit Manipulation using Parallel Bit Count.
#include <iostream>

int countBits(int num) {
    // Step 1: Count bits in pairs
    num = num - ((num >> 1) & 0x55555555);
    
    // Step 2: Count bits in nibbles
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    
    // Step 3: Count bits in bytes
    num = (num + (num >> 4)) & 0x0F0F0F0F;
    
    // Step 4: Sum up the bits
    num = num + (num >> 8);
    num = num + (num >> 16);
    
    // The result is the number of bits in the least significant byte
    return num & 0x3F;
}

int countBitFlips(int A, int B) {
    int xorResult = A ^ B;
    return countBits(xorResult);
}

int main() {
    int A = 29;  // Example number
    int B = 15;  // Example number

    int flips = countBitFlips(A, B);
    std::cout << "Minimum number of bit flips required: " << flips << std::endl;

    return 0;
}
Summary
Brian Kernighan's Algorithm: Time complexity of O(number of set bits) is practical for cases where the number of set bits is relatively small compared to the total number of bits.
Parallel Bit Count Method: Time complexity of O(1) is highly efficient for fixed-size integers (like 32-bit or 64-bit integers) as it performs a constant amount of work regardless of the number of set bits.