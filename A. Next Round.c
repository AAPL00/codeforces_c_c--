#include <stdio.h>
int main() {
    int total_participants;
    int k_place;
    int number_of_advancers = 0;
    scanf("%d %d", &total_participants, &k_place);
    int scores[total_participants];
    for(int i = 0; i < total_participants; i++) {
        scanf("%d", &scores[i]);
    }
    int k_place_score = scores[k_place - 1];
    if (k_place_score != 0) {
        for (int i = 0; i < total_participants; i++) {
            if (scores[i] >= k_place_score) {
                number_of_advancers++;
            }
        }
    }
    else if (k_place_score == 0) {
        for (int i = 0; i < total_participants; i++) {
            if (scores[i] > 0) {
                number_of_advancers++;
            }
        }    
    }
    printf("%d", number_of_advancers);
}