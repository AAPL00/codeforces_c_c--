#include <stdio.h>
int main() {
    int weight;
    scanf("%d", &weight);
    if (weight == 0 || weight == 2) {
        printf("NO");
    }
    else {
        if (weight % 2) {
            printf("NO");
        }
        else {
            printf("YES");
        }
    }
    return 0;
}