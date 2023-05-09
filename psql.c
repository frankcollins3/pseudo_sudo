#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char sentence[100];
    char *findport = "lsof -i :5432"; 
    // sudo lsof-i 5432 
    char buffer[1024];
    FILE *pipe = popen(findport, "r");
    int status;

    if (!pipe) {
        printf("Failed to execute command\n");
        return -1;
    }

    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        printf("%s", buffer);
    }

    status = pclose(pipe);

    if (status == -1) {
        printf("Command execution failed\n");
    } else {
        printf("Command returned status %d\n", status);
    }

    printf("Please enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Here's my sentence: %s\n", sentence);

    return 0;
}

// Test.c () => 

// #include <stdio.h>
// #include <regex.h>
// #include <string.h>

// int main() {
//     char myNumbers[256] = "postgres 96647 medium    7u  IPv6 0x67f00f407f2f5497      0t0  TCP localhost:postgresql (LISTEN)";
//     regex_t regex;
//     regmatch_t match[2];

//     return 0;
// }

// I created a test file. I'm having trouble implementing a regex that removes my number.

// looking back at the C program (trash dummy) that parses user input for their desktop username,

// the goal is to take this string:

//     char myNumbers[256] = "postgres 96647 medium    7u  IPv6 0x67f00f407f2f5497      0t0  TCP localhost:postgresql (LISTEN)";

// "postgres 96647 medium" and reduce it to this screen. medium is my desktop name. Parse user input for their desktop name and cut the string off at that word (if possible)


