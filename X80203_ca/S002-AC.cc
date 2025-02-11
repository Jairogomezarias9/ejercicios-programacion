#include<iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
   while( cin>>s){
    stack<int> p;
    int contador=1;
    for(int i =0;i<s.size();++i){
        cout<<s[i];
        if(s[i]=='('){
            p.push(contador);
            cout<<contador;
            ++contador;

        }
        else if(s[i]==')'){
            cout<<p.top();
            p.pop();


        }

    }
    cout<<endl;
   }
}