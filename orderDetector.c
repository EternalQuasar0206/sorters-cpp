#include "stdio.h"
#include "stdlib.h"

int getMaxNumberSequence(char* input) {
    int index = 0;
    int currentSequence = 0;
    int maxSequence = 0;

    while(index < 30) {
        if(input[index] == 1 || input[index] == '1') {
            currentSequence++;
        }
        else {
            if(currentSequence > maxSequence) {
                maxSequence = currentSequence;
                currentSequence = 0;
            }
        }

        index++;
    }

    return maxSequence;
}

int main() {
    char* input = (char*) malloc(sizeof(char) * 30);

    scanf("%s", input);

    int maxSequenceLength = getMaxNumberSequence(input);

    printf("Sequência máxima de números '1': %i", maxSequenceLength);

    return 0;
}