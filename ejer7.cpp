#include <iostream>
using namespace std;
int contatenar(int cad1[],int tam1,int cad2[],int tam2){
		for(int i=0;i<tam2;i++){
		cad1[tam1]=cad2[i];
		cad2[i]='\0';
		tam1++;}
	
}
int concatenar_con_ptr(int *ptr1,int tam1,int *ptr2,int tam2){
	for(int i=0;i<tam2;i++){
		ptr1+=tam1;
		cout<<*ptr2<<" "<<*ptr1;
		*ptr1=*ptr2;
		ptr1++;
		ptr2++;
		
	cout<<endl;}
	
}
int main(){
	int cad1[15]={1,2,3,4,5},cad2[16]={6,7,8,9,0};
	int *ptr=cad1,*ptr2=cad2;
	concatenar_con_ptr(ptr,5,ptr2,5);
	//contatenar(cad1,5,cad2,5);
	for(int i=0;i<10;i++){
		cout<<*ptr<<" ";
		ptr++;
	}
	return 0;
}
