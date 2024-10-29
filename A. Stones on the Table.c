#include <stdio.h>
#include <string.h>
int main() {
    int number_of_stones;
    scanf("%d", &number_of_stones);
    char distribution[50];
    scanf("%s", distribution);
    int amount_of_taked_stones = 0;
    for(int i = 0; i < strlen(distribution) - 1; i++ ) {
        if (distribution[i] == distribution[i + 1]) {
            amount_of_taked_stones++;
        }
    }
    printf("%d", amount_of_taked_stones);
    return 0;
}