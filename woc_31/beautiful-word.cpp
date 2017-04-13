/*
Original link: https://www.hackerrank.com/contests/w31/challenges/beautiful-word
*/

#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    string word;
    cin >> word;
    for (int i = 0; i < word.size()-1; i++){
        if ((is_vowel(word[i]) && is_vowel(word[i+1])) || word[i] == word[i+1]){
            printf("%s\n", "No");
            return 0;
        }
    }
    printf("%s\n", "Yes");
    return 0;
}
