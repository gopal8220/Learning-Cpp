#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {

        for (int c = 1; c <= r; c++)
        {
            char val = 'A' + r + c - 2;
            cout << val;
        }
        cout << endl;
    }
    return 0;
}