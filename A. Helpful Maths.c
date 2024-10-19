#include <stdio.h>

int main() {
    int one = 0;
    int two = 0;
    int three = 0;
    char string[100] = {'0'};
    int string_size = 0;
    scanf("%s", &string);
    for(int i = 0; i < 100; i++) {
        switch (string[i]) {
        case '1' : one++; break;
        case '2' : two++; break;
        case '3' : three++;
        }
    }
    for(int i = 0; i < 100; i++) {
        if(string[i] != '0') {
            string_size++;
        }
        else {
            break;
        }
    }
    char newstring[string_size];
    int i = 0;
    for(i; i < one; i + 2) {
        newstring[i] = '1';
    }
    for(i; i < i + two; i + 2) {
        newstring[i] = '2';
    }
    for(i; i < i + three; i + 2) {
        newstring[i] = '3';
    }
    for(int i = 1; i < 99; i + 2) {
        newstring[i] = '+';
    }
    for(int i = 0; i < 100; i++) {
        printf("%c", newstring[i]);
    }
}