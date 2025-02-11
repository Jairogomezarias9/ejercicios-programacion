#include <iostream>
using namespace std;

int main()
{

    int x, y;
    while(cin >> x >> y){
    int num = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << 9 - num % 10;
            ++num;
        }
        cout << endl;
    }
    
    }
   
}