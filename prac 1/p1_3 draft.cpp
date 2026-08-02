#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, word = "", longest = "";

    cout << "Enter a sentence:\n";
    getline(cin, sentence);

    sentence += ' ';

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    cout << "Longest Word: " << longest << endl;
    cout << "Length: " << longest.length();

    return 0;
}
