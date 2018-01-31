#include <iostream>
#include <fstream> //biblioteca para manipulacion de ficheros
using namespace std;

int main(void) {

	//declaro variables

	int data1[4],data2[4],product[4];
	int i;


	data1[0] = 9;
	//ifstream es para archivos de lectura
	//ofstream es para archivos de escritura

	ifstream archivo1,archivo2;
	ofstream archivo3;

	//abro los ficheros indicando si son de lectura o escritura


	archivo1.open("datos1.dat",ios::in);
	archivo2.open("datos2.dat",ios::in);
	archivo3.open("productos.dat",ios::out);

	//leo los datos de los ficheros de lectura y escribo en archivo3

	for(i=0;i<4;i++){
		archivo1 >> data1[i];
		archivo2 >> data2[i];
		product[i] = data1[i]*data2[i];
		archivo3 << product[i] << endl;
	}

	//cierro archivos

	archivo1.close();
	archivo2.close();
	archivo3.close();


	}






	
