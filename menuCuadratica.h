#ifndef MENUCUADRATICA_H_INCLUDED
#define MENUCUADRATICA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

void Revisar_opc(int op);


void Menu_C()
{

    cout<<"\t_______________________________________________"<<endl;
    cout<<"\t| MENU ECUACIONES CUADRATICAS                 |"<<endl;
    cout<<"\t|                                             |"<<endl;
    cout<<"\t| OPCIONES:                                   |"<<endl;
    cout<<"\t|                                             |"<<endl;
    cout<<"\t| 1-Hay valor de a, b, pero NO c              |"<<endl;
    cout<<"\t| 2-Hay valor de a, c, pero NO B              |"<<endl;
    cout<<"\t| 3-Volver atras                              |"<<endl;
	cout<<"\t_______________________________________________"<<endl;
	cout<<"\n";


}

void Revisar_opc(int op)
{
    double a, b, c;
    double x, x1, x2;
    double numero, delta, raizCuadrada;
    switch(op)
    {
        case 1:
            system("cls");

            cout<<"\n\tIngrese el valor de A: ";
            cin>>a;
            cout<<"\n\tIngrese el vaor de B: ";
            cin>>b;
            printf("\n\t Forma de la ecuacion: %.2lf x^2 + %.2lf x = 0", a, b);
            printf("\n\t => x(x %.2lf+ %.2lf) = 0", a,b);

            x2 = -b / a;

            cout<<"\n\t Resultado de x:";
            cout<<"\n\t x1 = 0";
            cout<<"\n\t x2 = "<<x2;
            break;

        case 2:
            system("cls");

            cout<<"\n\tIngrese valor de A: ";
            cin>> a;
            cout<<"\n\tIngrese valor de C:";
            cin>> c;
            printf("\n\t Forma de la ecuacion: %.2lf x^2 + %.2lf = 0", a, c);
            numero =  -1*(c) / a;
            raizCuadrada = sqrt(numero);

            if(numero<0)
            {
                printf("\n\tRaiz imaginaria!");
                printf("\n\tResultado de X = %.2lf i", raizCuadrada);
            }
            else
            {   printf("\nResultado de X = %.2lf", raizCuadrada);}

            break;

        case 3:
            system("cls");
            system("PAUSE");
            system("cls");
            break;



        default:
            cout<<"Error";
            break;
    }

}
#endif // MENUCUADRATICA_H_INCLUDED
