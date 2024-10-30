#include <stdio.h>

int main() {
    int k;
    int n;
    int w;
    scanf("%d %d %d", &k, &n, &w);
    int total_money = 0;
    for (int i = 1; i <= w; i++) {
        total_money += i * k;
    }
    int borrowed_money = total_money - n;
    if (borrowed_money < 0) {
        borrowed_money = 0;
    }
    printf("%d", borrowed_money);
    return 0;
}