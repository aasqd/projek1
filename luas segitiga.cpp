#include <iostream>
using namespace std;

int main (){
	
	float luas,panjang,lebar;
	
	cout<<"Panjang : ";
	cin>>panjang;
	cout<<"Lebar : ";
	cin>>lebar;
	luas=panjang*lebar*0.5;
	cout<<"Luas segitiga: "<<luas<<endl;
	return 0;
}