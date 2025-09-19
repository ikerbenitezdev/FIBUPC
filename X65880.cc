#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c >= 'a' and c <= 'z'){
        cout << "Lowercase letter" << endl;
    }else if(c >= 'A' and c <= 'Z'){
        cout << "Uppercase letter" << endl;
    }else if(c >= '0' and c <= '9'){
        cout << "Number" << endl;
    }
}