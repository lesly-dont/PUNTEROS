#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
};
int main()
{
	int fila=0,columna=0,**pm_notas;
	int *codigo;
	string *nombre;	
	cout<<"CUANTOS ESTUDIANTES DESEA INGRESAR:   ";
	cin>>fila;	
	cout<<"CUANTAS NOTAS DESEA INGRESAR:  ";
	cin>>columna;
		
	pm_notas = new  int *[fila];
	codigo = new int [fila];
	nombre = new string [fila];
	for (int i=0;i<fila;i++){
	pm_notas[i] = new int[columna]; 		
	}
	cout<<"\n***********REGISTRO ESTUDIANTE****************"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"CODIGO:  ";
		cin>>codigo[i];
		cin.ignore();
		cout<<"NOMBRE:  ";
		getline(cin,nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"INGRESE LA NOTA ["<<++ii<<"]: ";
			cin>>*(*(pm_notas+i)+ii);
			ii--;
			}
			cout<<"____________________________________"<<endl;
	}
		cout<<"\n*******MOSTRAR NOTAS************"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"CODIGO: ";
			cout<<codigo[i]<<endl;
			cout<<"NOMBRE: ";
			cout<<nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"NOTAS: ["<<++ii<<"]: ";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			ii--;
			}
			cout<<"------------------------------------"<<endl;
	}
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	system("PAUSE");
	return 0;
}
