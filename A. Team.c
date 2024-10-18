#include <stdio.h>
int main() {
    int number_of_problems;
    scanf("%d", &number_of_problems);
    int problems_implemented = 0;
    int st1;
    int st2;
    int st3;
    for(int i = 0; i < number_of_problems; i++) {        
        scanf("%d %d %d", &st1, &st2, &st3);
        if (st1 + st2 + st3 >= 2) {
            problems_implemented ++;
        }
    }
    printf("%d", problems_implemented);
}