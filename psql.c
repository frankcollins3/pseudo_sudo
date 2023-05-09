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


