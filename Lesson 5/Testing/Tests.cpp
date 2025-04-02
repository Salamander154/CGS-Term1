#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string sentence, word;
    vector<string> words;

    cout << "Enter a sentence: \n";
    getline(cin, sentence);

    sentence += ' ';
    for (size_t i = 0; i < sentence.length(); i++)
    {
        char c = sentence[i];
        if (c == ' ') 
        {
            if (!word.empty()) 
            {
                words.push_back(word);
                word.clear();
            }
        }
        else 
        {
            word += c;
        }
    }

    for (int i = words.size() - 1; i >= 0; --i) 
    {
        cout << words[i] << " ";
    }

    return 0;
}
