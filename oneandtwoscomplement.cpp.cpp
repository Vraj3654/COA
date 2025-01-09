#include <iostream>

using namespace std;

char binary[16];      // Array to store the input binary number
char complement1[16]; // Array to store the 1's complement
char complement2[16]; // Array to store the 2's complement

void ones() {
    for (int i = 0; i < 16; i++) {
        // Calculate 1's complement
        complement1[i] = (binary[i] == '0') ? '1' : '0';
    }
}

void twos() {
    int carryBits = 1; // Initialize carry for 2's complement
    for (int i = 15; i >= 0; i--) {
        if (complement1[i] == '1' && carryBits == 1) {
            complement2[i] = '0'; // 1 + 1 = 0 with carry
        } else if (complement1[i] == '0' && carryBits == 1) {
            complement2[i] = '1'; // 0 + 1 = 1, no carry
            carryBits = 0;        // No more carry
        } else {
            complement2[i] = complement1[i]; // Copy the rest
        }
    }
}

int main() {
    cout << "Enter the 16-bit binary number (as 0s and 1s): ";
    for (int i = 0; i < 16; i++) {
        cin >> binary[i]; // Input each bit of the binary number
        // Input validation
        while (binary[i] != '0' && binary[i] != '1') {
            cout << "Invalid input. Please enter 0 or 1: ";
            cin >> binary[i];
        }
    }

    ones(); // Calculate 1's complement
    twos(); // Calculate 2's complement

    cout << "One's complement: ";
    for (int i = 0; i < 16; i++) {
        cout << complement1[i]; // Output 1's complement
    }
    cout << endl;

    cout << "Two's complement: ";
    for (int i = 0; i < 16; i++) {
        cout << complement2[i]; // Output 2's complement
    }
    cout << endl;

    return 0;
}
