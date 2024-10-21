#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main() {
    int number_of_words;
    scanf("%d", &number_of_words);
    vector<string> list_of_words;
    for (int i = 0; i < number_of_words; i++) {
        cin >> list_of_words[i];
    }
    char first;
    char last;
    int number;
    for ( int i = 0; i < number_of_words; i++) {
        cout << list_of_words[i][0] << list_of_words[i].size() - 2 << list_of_words[i][list_of_words[i].size() - 1];
    }
    return 0;
}