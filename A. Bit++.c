#include <stdio.h>
/*EN EL SEGUNDO CASO DE PRUEBA DA ERROR POR ALGUNA RAZON, EN MI ORDENADOR FUNCIONA BIEN
2
X++
--X
*/
int main() {
    int x = 0;
    char actual[3];
    int number_of_statements;
    scanf("%d", &number_of_statements);
    for (int i = 0; i < number_of_statements; i++) {
        scanf("%s", &actual);
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