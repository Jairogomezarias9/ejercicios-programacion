#include <iostream> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        int count = 0;
        cin >> y;
        while (y != 0)
        {
            x = y;
            cin >> y;
            if (y > x)
                ++count;
        }
        cout << count << endl;
    }
}
