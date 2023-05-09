#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int get_status(char c[])
{
    int status = system(c);
    return status;
}

int main() {
        char sentence[100];
        char *findport = "lsof -i :5432";  // sudo lsof-i 5432 
        char kill_statement[15] = "kill ";
        // int status = system(findport);       // created callback
        int find_port_status;
        int kill_port_status;

        char buffer[1024];
        FILE *pipe = popen(findport, "r");
        char myNumbers[256] = "postgres 96647 medium    7u  IPv6 0x67f00f407f2f5497      0t0  TCP localhost:postgresql (LISTEN)";
        char numString[6] = {0}; // Initialize to all zeroes
        int num = 0;

    if (!pipe) {
        printf("Failed to execute command\n");
        return -1;
    }
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        printf("%s", buffer);
    }
    for (int i = 0; i < strlen(buffer); i++) {
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            // If the character is a digit, add it to the numString
            numString[strlen(numString)] = buffer[i];

            // If we have extracted 5 digits, break out of the loop
            if (strlen(numString) == 5) {
                break;
            }
        }
    }

    find_port_status =  get_status(findport);
    printf("heres my number:\t %d \n", find_port_status);    

    if (find_port_status == 0) {        
    num = atoi(numString);
    printf("The first 5 numbers in the string are: %05d\n", num);
    // char kill_port[10] = strcat(kill_statement, num);
    // int kill_port_status = get_status(kill_port);
    // printf("kill status:\t %d \n", kill_port_status);

    }

    return 0;
}
