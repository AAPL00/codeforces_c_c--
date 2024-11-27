#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    scanf("%s", string);
    int min = 0;
    int may = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            min++;
        }
        else {
            may++;
        }
    }
    if (min >= may) {
        for (int i = 0; i < strlen(string); i++) {
            if (string[i] >= 'A' && string[i] <= 'Z') {
                string[i] += 32;
            }
        }
    }
    else {
        for (int i = 0; i < strlen(string); i++) {
            if (string[i] >= 'a' && string[i] <= 'z') {
                string[i] -= 32;
            }
        }
    }
    printf("%s", string);
}