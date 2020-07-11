#ifndef DATOSCUADRATICA_H_INCLUDED
#define DATOSCUADRATICA_H_INCLUDED

    #include <stdio.h>
    #include <stdlib.h>
    #include <iostream>
    #include <string>

    using namespace std;

    int func_menu()
    {

        double a, b,c;
        double delta, rc, x1, x2,raizCuadrada, numero;
        double Vx, Vy, eje;
        string concava;

        cout<<"\t_______________________________________________"<<endl;
        cout<<"\t| MENU PRINCIPAL - RESOLUCION DE ECUACIONES   |"<<endl;
        cout<<"\t|                                             |"<<endl;
        cout<<"\t|                                             |"<<endl;
    	cout<<"\t_______________________________________________"<<endl;
    	cout<<"\n";
    	cout<<"\n\t Ingrese valores de:  a, b, c : ";
        cin>>a>>b>>c;

        ///muestro como queda la funcion
        if(a!=0 && b!=0 && c!=0)
        {
            printf("\n\t Forma de la ecuacion: ");
            printf("\n\t %.2lf x^2 + %.2lfx + %.2lf = 0", a, b, c);
            printf("\n");

            if(a<0)
                concava = "Concavidad hacia abajo";
            else
                concava = "Concavidad hacia arriba";
            //raices
            delta = b*b - 4*a*c;
            if(delta > 0)
            {
                printf("\n\t Hay dos raices");
                rc = sqrt(delta);

                x1 =  (-b + rc)/(2*a);
                x2 = (-b - rc)/(2*a);
                printf("\n\t Raiz 1-> x1 = %.2lf  y x2 = %.2lf", x1, x2);
            }
            else
            {
                if(delta == 0)
                {
                    printf("\n\t Hay una sola raiz");
                    x1 =  -b / 2*a;
                    printf("\n\t Raiz -> x1 = %.2lf", x1);
                }
                else
                {
                    printf("\n\t Las raices son imaginarias. ");

                }
            }



        }
        else
        {
            if(c==0 && a!=0)
            {
                printf("\n\t Forma de la ecuacion: ");
                printf("\n\t %.2lf x^2 + %.2lf = 0", a, c);
                printf("\n");
                printf("\n\t => x(x %.2lf+ %.2lf) = 0", a,b);

                x2 = -b / a;

                cout<<"\n\t Resultado de x:";
                cout<<"\n\t x1 = 0";
                cout<<"\n\t x2 = "<<x2;
            }
            else
            {
                if(a!=0 && b==0)
                {
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

                }
                else
                    printf("\nError! a nunca puede ser igual a 0!");
            }
        }

        // vertice y eje de simetría.

        if(b== 0)
            eje = 0;
        else
            eje = -b/(2*a);

        Vx = eje;
        Vy = -((b*b - 4*a*c) /4*a);

        printf("\n\t Puntos del vertice: (x;y) = (%2lf;%.2lf)", Vx, Vy);
        printf("\n\t Eje de simetría: %.2lf", eje);
        system("PAUSE");
        return 0;
    }

#endif // DATOSCUADRATICA_H_INCLUDED
