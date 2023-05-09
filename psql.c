#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char myNumbers[256] = "postgres 96647 medium    7u  IPv6 0x67f00f407f2f5497      0t0  TCP localhost:postgresql (LISTEN)";
    char numString[6] = {0}; // Initialize to all zeroes
    int num = 0;

    // Loop over the characters in the string and extract the first 5 numbers
    for (int i = 0; i < strlen(myNumbers); i++) {
        if (myNumbers[i] >= '0' && myNumbers[i] <= '9') {
            // If the character is a digit, add it to the numString
            numString[strlen(numString)] = myNumbers[i];

            // If we have extracted 5 digits, break out of the loop
            if (strlen(numString) == 5) {
                break;
            }
        }
    }

    // Convert the numString to an integer and print the result
    num = atoi(numString);
    printf("The first 5 numbers in the string are: %05d\n", num);

    return 0;
}
