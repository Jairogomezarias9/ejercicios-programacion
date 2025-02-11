#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    double n, x,s;
    cin>>s;
    int u=0;
    while(u<s){

    while (cin >> n)
    {

        double max = 0;
        double min = 0;
        double suma = 0;
        int i =0;
        while (i<n)
        {
            cin>>x;

            if (max == 0)
            {
                max = x;
            }
            else if (max < x)
            {
                max = x;
                x = max;
            }

            if (min == 0)
            {
                min = x;
            }
            else if (min > x)
            {
                min = x;
                x = min;
            }

            suma = suma + x;
            ++i;
        }
        cout << min << " " << max << " " << suma / n << endl;
        max=0;
        min=0;
        suma=0;

    }
    }
}