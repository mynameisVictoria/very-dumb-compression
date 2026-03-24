#include <stdio.h>

int charecterInRowCheck(char str[], int index, char repeatChar) {
    int counter = 0;
    while (1) {
        if (str[index + counter] == repeatChar) {
            counter++;
        }
        else {
            return counter;
        }
    }
}

int main() {
    char str[] = "Hellllloasdfgh";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i - 1]) {
            printf("%d \n", charecterInRowCheck(str, i, str[i]) + 1);
        }
        printf("Character at index %d is %c\n", i, str[i]);
    }

    return 0;
}
