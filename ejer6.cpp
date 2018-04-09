#include <iostream>
using namespace std;
void Mostrar_Cad(int cad[],int tam){
	for(int i=0;i<tam;i++){
		cout<<cad[i]<<" ";}
}
void Copiar_Cad(int cad1[],int tam1,int cad2[],int tam2){
	for(int i=0;i<tam2;i++){
		cad1[tam1]=cad2[i];
		tam1++;}
}
void Copiar_cad_con_ptr(int cad1[],int tam1,int cad2[],int tam2){
	int *ptr = cad1;
	ptr+=tam1;
	for(int i=0;i<tam2;i++){
		*ptr=cad2[i];
		ptr++;}
}
int main(){
	int cad1[20]={1,2,3,4,5};
	int cad2[10]={6,7,8,9,0};
	int tam1=5,tam2=5;
	Mostrar_Cad(cad1,tam1);
	cout<<endl;
	Mostrar_Cad(cad2,tam2);
	Copiar_Cad(cad1,tam1,cad2,tam2);
	cout<<"\nsin punteros= ";
	Mostrar_Cad(cad1,tam1+tam2);
	cout<<"\ncon punteros=";
	Copiar_cad_con_ptr(cad1,tam1,cad2,tam2);
	Mostrar_Cad(cad1,tam1+tam2);
	return 0;
}


