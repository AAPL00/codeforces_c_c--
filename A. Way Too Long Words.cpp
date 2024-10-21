#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main() {
    int number_of_words;
    string word;
    scanf("%d", &number_of_words);
    vector<string> list_of_words;
    for (int i = 0; i < number_of_words; i++) {
        cin >> word;
        list_of_words.push_back(word);
    }
    char first;
    char last;
    int number;
    for ( int i = 0; i < number_of_words; i++) {
        if (list_of_words[i].size() > 10) {
            cout << list_of_words[i][0] << list_of_words[i].size() - 2 << list_of_words[i].back() << endl;
        }
        else {
            cout << list_of_words[i] << endl;
        }
    }
    return 0;
}