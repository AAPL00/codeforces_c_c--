#include <stdio.h>
int main() {
    char string[1001];
    scanf("%s", string);
    if (string[0] >= 'a' && string[0] <= 'z') {   //en realidad lo que se compara son los ASCII y la diferencia exacta entre
        string[0] -= 32;                          //un carácter en minúsculas y su representación en mayusculas es de 32
    }
    printf("%s", string);
    return 0;
}