#include <stdio.h>

int main() {
    int limak;
    int bob;
    scanf("%d %d", &limak, &bob);
    int years = 0;
    while (1) {
        limak *= 3;
        bob *= 2;
        years++;
        if (limak > bob) {
            break;
        }
    } 
    printf("%d", years);
    return 0;
}