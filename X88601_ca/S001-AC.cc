#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Pre: 0 <= i <= j < s.size()
// Post: el substring s[i..j] s'ha revessat. La resta de s no ha canviat.
void reverseSubstring(string &s, int i, int j){
    if(j>i){
        char aux;
        aux=s[i];
        s[i]=s[j];
        s[j]=aux;
    
    
         reverseSubstring(s,i+1,j-1);
    }
}



int main(){
    string s;
    int i,j;
    cin>>s>>i>>j;
    reverseSubstring(s,i,j);
    cout<<s<<endl;

}