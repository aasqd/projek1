#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	const float phi = 3.14;
	float jari_jari, luas, keliling ;
	
	cout<<"jari_jari : ";
	cin>>jari_jari;
	
	jari_jari = 10.0;
	
	luas = phi * jari_jari * jari_jari;
	
	keliling = 2 * phi * jari_jari;
	
	cout << "luas lingkaran = " << luas <<endl;
	cout << "keliling lingkaran = " << keliling <<endl;
	
}