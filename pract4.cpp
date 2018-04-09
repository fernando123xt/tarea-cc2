//multiplicacion de matrices
#include <iostream>
using namespace std;
void crear(int **&M,int f,int c){
	M=new int*[f];
	for(int i=0;i<f;i++){
		M[i]=new int[c];}	
}
void ingresar(int **M,int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"valar";
			cin>>*(*(M+i)+j);}
	}
}
void mostrar(int **M,int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<*(*(M+i)+j)<<" ";}
		cout<<endl;
	}
}
void multiplicarmatrix(int **A,int fa,int ca,int **B,int fb,int cb){
	int tamA=fa*ca;
	int **C;
	crear(C,tamA,cb);
	for(int i=0;i<tamA;i++){
		for(int j=0;j<cb;j++){
			int sum=0;
			for(int k=0;k<ca;k++){
				sum+=*(*(A+i)+k)*(*(*(B+k)+j));
			}
			*(*(C+i)+j)=sum;
			cout<<sum<<" ";
		}
	}
}
int main(){
	int **M,**N,f,c;
	crear(M,2,2);
	ingresar(M,2,2);
	mostrar(M,2,2);
	crear(N,2,2);
	ingresar(N,2,2);
	mostrar(N,2,2);
	multiplicarmatrix(M,2,2,N,2,2);
}
