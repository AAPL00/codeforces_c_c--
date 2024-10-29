#include <stdio.h>

int main() {
    int steps_away;
    scanf("%d", &steps_away);
    if (steps_away % 5 == 0) {
        printf("%d", steps_away / 5);
    }
    else {
        printf("%d", steps_away / 5 + 1);
    }
}