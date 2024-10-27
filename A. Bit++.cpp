#include <stdio.h>
int main() {
    int x = 0;
    char actual[4];
    int number_of_statements;
    scanf("%d", &number_of_statements);
    for (int i = 0; i < number_of_statements; i++) {
        scanf("%s", actual);
        if ((actual[0] == 'X' && actual[1] == '+') || (actual[0] == '+')) {
            x++;
        }
        else if ((actual[0] == 'X' && actual[1] == '-') || (actual[0] == '-')) {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}