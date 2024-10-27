#include <stdio.h>
#include <string.h>
int main() {
    int one = 0;
    int two = 0;
    int three = 0;
    char string[101];
    int string_size = 0;
    scanf("%s", string);
    for(int i = 0; i < 101; i++) {
        switch (string[i]) {
        case '1' : one++; break;
        case '2' : two++; break;
        case '3' : three++; break;
        }
    }
    int i = 0;
    while (one != 0) {
        string[i] = '1';
        i += 2;
        one--;
    }
    while (two != 0) {
        string[i] = '2';
        i += 2;
        two--;
    }
    while (three != 0) {
        string[i] = '3';
        i += 2;
        three--;
    }
    for (int i = 1; i < strlen(string); i += 2) {
        string[i] = '+';
    }
    printf("%s", string);  
}