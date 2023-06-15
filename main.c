#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(NULL));

    printf("Rolling dice...\n");
    printf("Die 1: %d\n", rollDice());
    printf("Die 2: %d\n", rollDice());

    return 0;
}
