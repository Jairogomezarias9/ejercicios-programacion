#include <iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for(int i=0; i<n;++i){
        factorial=factorial*i;
        
        
    }
    return factorial;
}
int main () {
	int n;
	while (cin >> n) {	
		cout << factorial(n) << endl;
	}
	
}