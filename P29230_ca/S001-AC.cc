#include <iostream>
#include <vector>
using namespace std;

const vector<int> CENT{
    {50}, {20}, {10}, {5}, {2}, {1}

};
void backtrack(int n, int suma, vector<int> &total)
{
    if (suma == n)
    {
        bool trobat=false;
        // cout del vector
        for (int i = 0; i < total.size(); ++i)
        {
           if(not trobat){
            trobat=true;
            cout<<total[i];
           }
           else{
            cout<<" " << total[i];
           }
            
        }
        cout << endl;
        
    }
    else if (suma > n)
    {
        
        return;
    }
    else
    {
        for (const auto &x : CENT)
        {
            if(total.empty() or x<=total[total.size()-1]){

            total.push_back(x);
            backtrack(n, suma + x, total);
            total.pop_back();
            }
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        int suma = 0;
        vector<int> total;
        
        backtrack(n, suma, total);
        cout<<endl;
    }
}