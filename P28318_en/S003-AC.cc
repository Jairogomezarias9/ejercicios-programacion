#include <iostream>
#include <vector>
using namespace std;
typedef  vector<int> Fila;
typedef vector<Fila> Matriu;




void llegirmatriu(Matriu& mat){
	int m=mat.size();
	int n=mat[0].size();
	for(int i=0; i<m; ++i){
		for(int j=0; j<n;++j){
			cin>>mat[i][j];
		}
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	Matriu mat(m,Fila(n));
	llegirmatriu(mat);
	string s;
	
	while(cin>>s){
		cout<<s<<" ";
		if(s=="row"){
			int t;
			cin>>t;
			cout<<t<<":";
			for(int i=0;i<n;++i){
				cout<<" "<<mat[t-1][i];
			}
			
		}
		
		else if(s=="column"){
			int w;
			cin>>w;
			cout<<w<<":";
			for(int i=0;i<m;++i){
				cout<<" "<<mat[i][w-1];
			}
		}
		
		else if(s=="element"){
			int k,a;
			cin>>k>>a;
			cout<<k<<" "<<a<<": "<<mat[k-1][a-1];
			
		}
		cout<<endl;
			
	}

	
	
}



