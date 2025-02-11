#include <iostream>
using namespace std;

int main() {

char s;
cin>>s;
int i;
i=0;


while(s!='.'){
    
 if((s == 'a') or (s == 'A'))   i++;
   
 cin>>s;

}
cout<<i<<endl;
}