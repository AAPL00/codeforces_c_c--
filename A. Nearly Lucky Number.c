#include <stdio.h>

int main() {
    int counter = 0;
    long int number;
    scanf("%ld", &number);
    while (number % 10 != number)  {
        if (number % 10 == 7 || number % 10 == 4) {
            counter ++;
        }
        number = number / 10;
    }
    if (number == 7 || number == 4) {
        counter++;
    }
    int is_lucky = 1;
    while (counter % 10 != counter) {
        if (counter % 10 != 7 && counter % 10 != 4) {
            is_lucky = 0;
            break;
        }
        else {
            counter = counter / 10;
        }
    }
    if (counter != 7 && counter != 4) {
         is_lucky = 0;
    }
    if (is_lucky == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}