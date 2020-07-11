#include <iostream>
#include "menuPrincipal.h"
#include "menuCuadratica.h"
#include "datosCuadratica.h"
#include "date.h"
using namespace std;

///declaracion de funciones
void Mcuadratica();
int ver_opciones(int op);
void m_principal();

int main()
{
    system("cls");

	m_principal();

    return 0;
}

void m_principal()
{
	int opc, ver;
	fecha_hora(); /// muestro fecha y hora actual con horario de pc
    Menu(); /// menu principal

    cin>> opc;
    ver = ver_opciones(opc);
    while(ver == 0)
    {
        system("cls");
     	fecha_hora();
     	Menu();
    	cin>> opc;
    	ver = ver_opciones(opc);
    }
}


int ver_opciones(int op)
{
    int ec_opc;
	switch(op)
	{

		case 1:
		    system("cls");
			Menu_C();
			cout<<"\n\t Opcion: ";
    		cin>> ec_opc;
    		Revisar_opc(ec_opc);
			break;
		case 2:
		    system("cls");
			func_menu();

    		system("cls");
    		m_principal();
			break;

		default:
			cout<<"Error!";
			return 0;
			break;
	}
}
