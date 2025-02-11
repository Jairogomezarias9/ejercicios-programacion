#include <iostream>
using namespace std;

void fer_rombe(int n, int espais_recursius) {
    for (int i = 0; i < n; ++i) {
        int esp = n - 1 - i + espais_recursius - n ;
        int sim = 1 + 2 * i;
        for (int x = 0; x < esp; ++x) {
            cout << " ";
        }
        for (int y = 0; y < sim; ++y) {
            cout << "*" ;
        }
        cout<<endl;

    }
    for (int i = 0; i < n-2; ++i) {
        int esp = i+1+espais_recursius-n;
        int sim = 2*n-3-2*i;
        for (int x = 0; x < esp; ++x) {
            cout << " ";
        }
        for (int y = 0; y < sim; ++y) {
            cout << "*" ;
        }
        cout<<endl;

    }
}

 void recursiu_rombe(int n, int espais_recursius){
    if(n==1) {
        
    }

    else{
        recursiu_rombe(n-1,espais_recursius);
        fer_rombe(n,espais_recursius);
        recursiu_rombe(n-1,espais_recursius);
    }
}

int main() {
    int n;
    while(cin >> n){
    recursiu_rombe(n,n);
    for(int i =0; i<n-1;++i) cout<<" ";
    cout<<"*"<<endl;
    }
}
