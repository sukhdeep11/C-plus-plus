#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        i <= 3 ? k++ : k--;

        for (j = 1; j <= 5; j++)
        {
            if ((j >= 4 - k) && (j <= 2 + k))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
