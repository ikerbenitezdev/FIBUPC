#include <iostream>
using namespace std;

int main()
{
    char c;
    string vowels = "aeiouAEIOU";
    cin >> c;
    string type = (vowels.find(c) != string::npos) ? "vowel" : "consonant";
    if (c >= 'a' && c <= 'z') {
        cout << "lowercase" << endl << type << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "uppercase" << endl << type << endl;
    }
}
