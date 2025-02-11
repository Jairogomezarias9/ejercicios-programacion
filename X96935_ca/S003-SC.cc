#include <iostream>
#include <stack>
using namespace std;

bool palindrom(int n){
    stack<int> s;
    int x;
    for(int i =0;i<n/2;++i){
        cin>>x;
        s.push(x);
    }
    cin>>x;
    for(int i=0;i<n/2;++i){
        cin>>x;
        if(x!=s.top()){
            return false;
        }
        s.pop();

    }
   if(s.empty()) {return true;}
   return false;
}

int main(){
    int n;
    cin>>n;
    if(palindrom(n)){
        cout<<"SI"<<endl;
    }
    else cout<<"NO"<<endl;

}