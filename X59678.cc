#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << min(min(x, y), z) << endl;
}