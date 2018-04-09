//ejercicio 1
#include <iostream>
using namespace std;
void paso_por_valor(int a,int b){
	a=5,b=6;
}
void paso_por_referencia(int &a,int &b){
	a=8,b=9;
}
int main(){
	int a=1,b=2;
	paso_por_valor(a,b);
	cout<<"paso x valor="<<a<<" "<<b<<endl;
	paso_por_referencia(a,b);
	cout<<"paso x refencia="<<a<<" "<<b<<endl;
	return 0;
}
