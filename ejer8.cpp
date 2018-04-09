//ejercicio 8
#include <iostream>
using namespace std;
void Mostrar_Cad(int cad[],int tam){
	for(int i=0;i<tam;i++){
		cout<<cad[i]<<" ";}
}

void intercambio(int cad1[],int cad2[],int tam1){
	int temp;
	for(int i=0;i<tam1;i++){
		temp=cad1[i];
		cad1[i]=cad2[i];
		cad2[i]=temp;}
}	
void intercambio_con_ptr(int *&ptr,int *&ptr2,int tam){
	int temp;
	for(int i=0;i<tam;i++){
		temp=*ptr;
		*ptr=*ptr2;
		*ptr2=temp;
	}
	cout<<*ptr<<endl;
}
	
int main(){
	int cad1[10]={1,2,3,4},cad2[10]={5,6,7,8};
	int *ptr1=cad1,*ptr2=cad2;
	//intercambio(cad1,cad2,4);
	intercambio_con_ptr(ptr1,ptr2,4);
	Mostrar_Cad(cad2,4);
}		
