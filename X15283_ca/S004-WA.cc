#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<char> pila;
    string s;
    while(cin>>s){
        string aux;
        for(int i =0;i<s.size();++i){


            if(s[i]=='('){
                pila.push('(');
                
            }
            else if(s[i]=='['){
                pila.push('[');
                
                
            }
            else if(s[i]==')'){
                if(not pila.empty()){
                    if(pila.top()=='('){
                    pila.pop();
                    
                }

                }
                
                else pila.push(')');
                
                
            }
            else if(s[i]==']' ){
                if(not pila.empty()){
                if(pila.top()=='['){
                    pila.pop();
                }
                
                else if(pila.top()=='('){
                    pila.pop();
                    pila.push(']');
                    
                }
                }
                else pila.push(']');
                
                
            }
            


        }
        for(int i =0;i<pila.size();++i){
            cout<<pila.top();
            pila.pop();
        }
        cout<<endl;
    }
}