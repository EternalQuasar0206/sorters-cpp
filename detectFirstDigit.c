#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
    char* input = (char*) malloc(sizeof(char) * 50);

    scanf("%s", input);

    int digitFoundIndex = 0;
    int index = 0;
    while(index < 50) {
        if(!isalpha(input[index])) {
            digitFoundIndex = index + 1;
            index = 50;
        }

        index++;
    }

    printf("First numeric digit found at position: %i", digitFoundIndex);

    return 0;
}