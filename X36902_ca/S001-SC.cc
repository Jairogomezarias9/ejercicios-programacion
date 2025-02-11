#include <iostream>
#include <stack>
using namespace std;

int main(){
    char x;
    cin>>x;
   stack<int> s;
   bool error=false;
   int contador=1;

    while(not error and x!='.'){
        if(x=='('){
            s.push(1);
        }
        else if(x=='['){
            s.push(2);
        }
        else if(x==')'){
            if(1==s.top()){
                s.pop();
            }
            else{
                cout<<"Incorrecte "<<contador<<endl;
                error=true;
            }
        }
         else if(2==']'){
            if(x==s.top()){
                s.pop();
            }
            else{
                cout<<"Incorrecte "<<contador<<endl;
                error=true;
            }
        }

        ++contador;
        cin>>x;

    }
    if(not error and s.empty()){
        cout<<"Correcte"<<endl;
    }
    else if(not error and not s.empty()){
        cout<<"Incorrecte "<<contador-1<<endl;
    }
}