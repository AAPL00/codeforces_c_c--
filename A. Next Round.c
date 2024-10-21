//No acepta la respuesta, da error en un caso de prueba mas escrito con la entrada 5 5
#include <stdio.h>
int main() {
    int total_participants;
    int k_place;
    int number_of_advancers = 0;
    scanf("%d %d", &total_participants, &k_place);
    int scores[total_participants];
    for(int i = 0; i < total_participants; i++) {
        scanf("%d", &scores[i]); //puedes introducirlos en una sola linea y presionar enter al final
    }
    int k_place_score = scores[k_place];
    if (k_place_score == 0) {
        printf("%d", number_of_advancers);
    }
    else {
        for(int j = 0; j < total_participants; j++) {
            if(scores[j] >= k_place_score) {
            number_of_advancers ++;
            }
        }
         printf("%d", number_of_advancers);
    }
    return 0;  
}