//ejercicio 2
#include <iostream>
using namespace std;
int suma_element_arr_iterativ(int cad[], int tam){
	int cont=0;
	for(int i=0;i<tam;i++){
		cont+=cad[i];	}
	return cont;
}
int suma_elem_arr_recursi(int cad[],int tam){
	int sum=cad[tam];
	if(tam==0){
		return sum;
	}
	return sum+=+suma_elem_arr_recursi(cad,tam-=1);
}
int main(){
	int cad[10]={2,3,4,5};
	//cout<<suma_element_arr_iterativ(cad,4);
	cout<<suma_elem_arr_recursi(cad,4);
}
