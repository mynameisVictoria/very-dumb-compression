#include <stdio.h>
#include <string.h>

void deleteAtIndex(char *str, int index) {
    for (int i = index; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
}
//test, tes once more
int charecterInRowCheck(char str[], int index, char repeatChar) {

    int consectuiveCount = 0;
    int indexCounter = index;
    while (1){
        if (str[indexCounter] == repeatChar) {
            consectuiveCount++;
            indexCounter++;
        }
        else {
            while (indexCounter - consectuiveCount < consectuiveCount) {
                deleteAtIndex(str, indexCounter);
            }
            return consectuiveCount;
            }
        }
    }

int main() {
    char str[] = "yyyyyy";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i - 1]) {
            int repeatCharAmount = charecterInRowCheck(str, i, str[i]);
            char repeatChar[2];
            sprintf(repeatChar, "%d", repeatCharAmount);
            str[i] = repeatChar[0];
        }
    }

    printf("%s\n", str);

    return 0;
}
