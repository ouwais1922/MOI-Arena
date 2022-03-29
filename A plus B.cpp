#include <iostream>
using namespace std;

int main()
{
    int c;
    long int a, b, s;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        s = a + b;
        cout << s << endl;
    }
}