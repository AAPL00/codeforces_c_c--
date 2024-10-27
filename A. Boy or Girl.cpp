#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    char name[101];
    scanf("%s", name);
    int distint_chars = 0;
    vector<char> already_in;
    for (int i = 0; i < strlen(name); i++) {
        char a = name[i];
        if (!any_of(already_in.begin(), already_in.end(), [a](char x) { 
            return x == a;
            })) 
        {
            already_in.push_back(a);
            distint_chars++;
        }
    }
    if (distint_chars % 2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }
}