#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

void llegirmatriu(Matriu &mat){
	int m=mat.size();
	int n=mat[0].size();
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cin>>mat[i][j];
		}
	}
	
}

int contadorhappy(const Matriu &mat){
	int m=mat.size();
	int n=mat[0].size();
	int contador=0;
		for(int i=0;i<m;++i){
		for(int j=1;j<n-1;++j){
			
			if(mat[i][j-1]==':'  and mat[i][j]=='-' and mat[i][j+1]==')'){
				++contador;
			}
			else if(mat[i][j-1]=='('  and mat[i][j]=='-' and mat[i][j+1]==':'){
				++contador;
			}
			
		}
		}
		return contador;
	
}

int contadorvertical(const Matriu& mat){
	int m=mat.size();
	int n=mat[0].size();
	int contador=0;
		for(int i=1;i<m-1;++i){
		for(int j=0;j<n;++j){
			if(mat[i-1][j]=='"'  and mat[i][j]=='|' and mat[i+1][j]=='v'){
				++contador;
			}
			else if(mat[i-1][j]=='^'  and mat[i][j]=='|' and mat[i+1][j]=='"'){
				++contador;
			
		}
		}}
		return contador;
}


int main(){
	int m,n;
while(cin>>m>>n){
	Matriu mat(m,Fila(n));
	llegirmatriu(mat);
	cout<<contadorhappy(mat)+contadorvertical(mat)<<endl;
}
}