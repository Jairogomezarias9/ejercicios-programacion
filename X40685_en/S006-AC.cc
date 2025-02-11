#include <iostream>
#include <string>
using namespace std;

int main()
{
    int NUM1, NUM2, NUM3;
    string comparador, operador;

    while (cin >> NUM1 >> operador >> NUM2 >> comparador >> NUM3)
    {
        bool resultado = false;

        if (operador == "*")
        {
            int multiplicacion = NUM1 * NUM2;
            if (comparador == "<")
            {
                if (multiplicacion < NUM3)
                    resultado = true;
            }
            else if (comparador == "<=")
            {
                if (multiplicacion <= NUM3)
                    resultado = true;
            }
            else if (comparador == "==")
            {
                if (multiplicacion == NUM3)
                    resultado = true;
            }
            else if (comparador == ">")
            {
                if (multiplicacion > NUM3)
                    resultado = true;
            }
            else if (comparador == ">=")
            {
                if (multiplicacion >= NUM3)
                    resultado = true;
            }
            else if (comparador == "!=")
            {
                if (multiplicacion != NUM3)
                    resultado = true;
            }
        }
        else if (operador == "+")
        {
            int suma = NUM1 + NUM2;
            if (comparador == "<")
            {
                if (suma < NUM3)
                    resultado = true;
            }
            else if (comparador == "<=")
            {
                if (suma <= NUM3)
                    resultado = true;
            }
            else if (comparador == "==")
            {
                if (suma == NUM3)
                    resultado = true;
            }
            else if (comparador == ">")
            {
                if (suma > NUM3)
                    resultado = true;
            }
            else if (comparador == ">=")
            {
                if (suma >= NUM3)
                    resultado = true;
            }
            else if (comparador == "!=")
            {
                if (suma != NUM3)
                    resultado = true;
            }
        }
        else if (operador == "-")
        {
            int resta = NUM1 - NUM2;
            if (comparador == "<")
            {
                if (resta < NUM3)
                    resultado = true;
            }
            else if (comparador == "<=")
            {
                if (resta <= NUM3)
                    resultado = true;
            }
            else if (comparador == "==")
            {
                if (resta == NUM3)
                    resultado = true;
            }
            else if (comparador == ">")
            {
                if (resta > NUM3)
                    resultado = true;
            }
            else if (comparador == ">=")
            {
                if (resta >= NUM3)
                    resultado = true;
            }
            else if (comparador == "!=")
            {
                if (resta != NUM3)
                    resultado = true;
            }
        }

        if (resultado)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}