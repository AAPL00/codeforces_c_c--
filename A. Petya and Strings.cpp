#include <string>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main() {
    char word1[100];
    char word2[100];
    char word1l[100];
    char word2l[100];
    for (int i =0; i < 100; i++) {
        word1[i] = 'a';
        word2[i] = 'a';
        word1l[i] = 'a';
        word2l[i] = 'a';
    }
    scanf("%s", word1);
    scanf("%s", word2);
    
    for (int i = 0; i < 100; i++) {
        word1l[i] = tolower(word1[i]);
        word2l[i] = tolower(word2[i]);
    }
    if (strcmp(word1l, word2l) > 0) {
        printf("%d", 1);
    }
    else if (strcasecmp(word1l, word2l) < 0) {
        printf("%d", -1);
    }
    else {
        printf("%d", 0);
    }
    
    return 0;
}