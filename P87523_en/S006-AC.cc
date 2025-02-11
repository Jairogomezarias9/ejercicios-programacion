
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int i = 0;
    while (c != '.' and i != 5)
    {
        if (c == 'h')
            i = 1;
        else if ((c == 'e' and i == 1) or (c == 'l' and i == 2) or (c == 'l' and i == 3) or (c == 'o' and i == 4))
            ++i;
        else
            i = 0;
        cin >> c;
    }
      if (i == 5) cout << "hello" << endl;
      else cout << "bye" << endl;

}