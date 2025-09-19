#include <iostream>
#include <algorithm> // for max and min with initializer_list que es de C++11s
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << (max({x, y, z}) + min({x, y, z})) << endl;
}