#include <iostream>
#include <string>
using namespace std;

int main()
{

    int NUM1, NUM2, NUM3;
    string comparador, operador;

    while (cin >> NUM1 >> operador >> NUM2 >> comparador >> NUM3)
    {

        if (operador == "*")
        {
            int multiplicacio = NUM1 * NUM2;
            if (comparador == "<")
            {
                if (multiplicacio < NUM3)
                    cout << "true";
            }

            else if (comparador == "<=")
            {
                if (multiplicacio <= NUM3)
                    cout << "true";
            }
            else if (comparador == "==")
            {
                if (multiplicacio == NUM3)
                    cout << "true";
            }

            else if (comparador == ">")
            {
                if (multiplicacio > NUM3)
                    cout << "true";
            }

            else if (comparador == ">=")
            {
                if (multiplicacio >= NUM3)
                    cout << "true";
            }
            else if (comparador == "!=")
            {
                if (multiplicacio != NUM3)
                    cout << "true";
            }

            else
                cout << "false";
        }
        else if (operador == "+")
        {
            int suma = NUM1 + NUM2;
            if (comparador == "<")
            {
                if (suma < NUM3)
                    cout << "true";
            }

            else if (comparador == "<=")
            {
                if (suma <= NUM3)
                    cout << "true";
            }
            else if (comparador == "==")
            {
                if (suma == NUM3)
                    cout << "true";
            }

            else if (comparador == ">")
            {
                if (suma > NUM3)
                    cout << "true";
            }

            else if (comparador == ">=")
            {
                if (suma >= NUM3)
                    cout << "true";
            }
            else if (comparador == "!=")
            {
                if (suma != NUM3)
                    cout << "true";
            }
            else
                cout << "false";
        }
        else if (operador == "-")
        {
            int resta = NUM1 - NUM2;
            if (comparador == "<")
            {
                if (resta < NUM3)
                    cout << "true";
            }

            else if (comparador == "<=")
            {
                if (resta <= NUM3)
                    cout << "true";
            }
            else if (comparador == "==")
            {
                if (resta == NUM3)
                    cout << "true";
            }

            else if (comparador == ">")
            {
                if (resta > NUM3)
                    cout << "true";
            }

            else if (comparador == ">=")
            {
                if (resta >= NUM3)
                    cout << "true";
            }
            else if (comparador == "!=")
            {
                if (resta != NUM3)
                    cout << "true";
            }

            else
                cout << "false";
        }

        cout << endl;
    }
}