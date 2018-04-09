//ejercicico 9
#include <iostream>
using namespace std;
bool palindrome(char cad[]){
	char *ptr2 = cad;
	char *ptr1 =cad;
	while(*ptr2!='\0'){
		ptr2++;
	}
	ptr2-=1;
	for(int i=0;i<=(ptr2-ptr1)/2;i++){
		if(*ptr1!=*ptr2){
			return false;
		}
		ptr1++;
		ptr2--;
	}
	return true;
}
int main(){
	char cad[10]={'a','n','a','a','n','a'};
	cout<<palindrome(cad);
	
	return 0;
}
