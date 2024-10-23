#include <stdio.h>
#include <string.h>
int main() {
    int one = 0;
    int two = 0;
    int three = 0;
    char string[100];
    int string_size = 0;
    scanf("%s", string);
    for(int i = 0; i < 100; i++) {
        switch (string[i]) {
        case '1' : one++; break;
        case '2' : two++; break;
        case '3' : three++;
        }
    }
    char newstring[strlen(string)];
    printf("%d\n %d\n %d\n", one, two, three);
    int i = 0;
    for (i; i <= one; i+=2) {
        newstring[i] = '1';
        printf("%c", newstring[i]);
    }
    for (i; i <= i + two; i+=2) {
        newstring[i] = '2';
    }
    for (i; i <= i + two + three; i+=2) {
        newstring[i] = '3';
    }
    for (int i = 1; i < strlen(newstring) - 1; i+=2) {
        newstring[i] = '+';
    }
    for (int i = 0; i < strlen(newstring); i++) {
        printf("%c", newstring[i]);
    }
}