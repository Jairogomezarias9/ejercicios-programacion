#include <iostream>
#include <queue>
using namespace std;

int main(){
    string lletra;
    priority_queue<int> s;
    while(cin>>lletra){
        if(lletra=="S"){
            int num;
            cin>>num;
            s.push(num);

        }
        else if (lletra == "A")
        {
            if (s.empty())
            {
                cout << "error!"<<endl;
            }

            else
            {
                cout << s.top()<<endl;
            }
        }
        else if (lletra == "R")
        {
            s.pop();


        }
        else if(lletra=="I"){
            int x;
            cin>>x;
            int y =s.top();
            y+=x;
            
            s.pop();
            s.push(y);
            
        }
        //D
        else{
             int x;
            cin>>x;
            int y =s.top();
            y-=x;
            
            s.pop();
            s.push(y);
            
        }
    }
}