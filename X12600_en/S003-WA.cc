#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int l = 0;

    while (cin >> x >> y)
    {
        
        while(l<y){
       

        for (int i = 0; i < x; i++)
        
        {
        
            for (int j = 0; j < x - i; j++)
            {
                cout << " ";
            }
            cout << "*";

            for (int z = 1; z < 2 * i; ++z)
        {

            cout << " ";
        }
         if(i>0 ) cout<<"*";
        cout << endl;
        
        }
        

        for(int i =x; i>=0; i--){

            for(int j = 0; j<x-i; ++j){
                cout<<" ";

            }
            cout<<"*";
            
            for(int z=1; z<2*i; z++){
                cout<<" ";
            }
             if(i>0 ) cout<<"*";
            cout<<endl;


        }
        l++;
        }
        l=0;
        cout<<endl;
    }
}