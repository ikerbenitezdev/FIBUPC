#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c >= 'a' and c <= 'z'){
       cout << (char)toupper(c) << endl;
    }else if(c >= 'A' and c <= 'Z'){
       cout << (char)tolower(c) << endl;
    }
}