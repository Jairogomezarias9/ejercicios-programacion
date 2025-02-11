#include <iostream>
using namespace std;

int main() {

    char x;
    int primer=0;
    int segon =0;
    

    while(cin>>x){
        if(x=='e') primer=primer+1;
        else if(x=='o') primer=primer-1;
        else if(x=='n') segon = segon-1;
        else if(x=='s') segon=segon+1;
    }
    cout<<"("<<primer<<", "<<segon<<")"<<endl;
}