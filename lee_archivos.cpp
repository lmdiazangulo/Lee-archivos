#include <iostream>
#include <fstream> //biblioteca para manipulacion de ficheros
using namespace std;

int main(void) {

	ifstream archivo1("datos1.dat");
	ifstream archivo2("datos2.dat");
	ofstream archivo3("productos.dat");

	for(int i = 0; i < 4; ++i) {
	    int data1, data2;
		archivo1 >> data1;
		archivo2 >> data2;
		archivo3 << (data1 * data2) << endl;
	}

	archivo3.close();

	return 0;
}






	
