#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void back(int n, vector<char>& total, int numA, int numB){
    if(n==total.size()){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(int i =0;i<2;++i){
            if(i==0 and abs(numA-numB)<=2){
                total.push_back('a');
                back(n,total,numA+1,numB);
                total.pop_back();
                
            }
             if(i==1 and abs(numA-numB)<=2){
                total.push_back('b');
                back(n,total,numA,numB+1);
                total.pop_back();
                
            }

        }
    }

}


int main(){
    int n;
    cin>>n;
    vector<char> total;
    back(n,total,0,0);

}