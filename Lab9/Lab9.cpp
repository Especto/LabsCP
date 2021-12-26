#include <iostream>
#include <string>
using namespace std;

int amount(string);
void cut_string(string input, string* array);
void sort_string(string* words, int size);
bool checking(string str, string alphabet);

int main() {
    string str;
    string alph{ "abcdefghijklmnopqrstuvwxyzABCVDEFGHIKLMNOPRSTYVWXYZ" };
    string delimiter{ " " };
    cout << "Enter the string that contains digits and spaces: ";
    getline(cin, str);
    bool verified = checking(str, alph + delimiter);
    if (verified) {
        cout <<"Sorted string:" << endl;
        int words_count = amount(str + ' ');
        string* words = new string[words_count];
        cut_string(' ' + str, words);
        sort_string(words, words_count);
    }
    else {
        cout << "\nError: allows only letters(en)!\n";
    }
    return 0;
}

bool checking(string str, string alphabet)
{
    bool verified = true;
    for (int i = 0; i < str.length() && verified; ++i) {
        if (alphabet.find(str.at(i)) == string::npos) {
            verified = false;
        }
    }
    return(verified);
}

int amount(string str) {
    int i = 0, amountWord = 0;
    while (str[i]) {
        if (str[i] == ' ') {
            amountWord++;
        }
        i++;
    }
    return(amountWord);
}

void cut_string(string str, string* words) {
    size_t space = 0;
    size_t prev_space;
    string sub_string;
    for (int i = 0; space != string::npos; i++) {
        prev_space = space;
        space = str.find(' ', space + 1);
        sub_string = str.substr(prev_space + 1, space - prev_space - 1);
        words[i] = sub_string;
    }
}

void sort_string(string* words, int size) {
    string tmp;
    int j, i;
    for (i = 1; i < size; ++i) {
        tmp = words[i];
        for (j = i - 1; j >= 0 && words[j].size() > tmp.size(); --j) {
            words[1 + j] = words[j];
        }
        words[1 + j] = tmp;
    }
    for (int i = 0; i < size; i++) {
        cout << words[i] << "\t";
    }
}
