#include "BinTree.hh"
#include "execute.hh"

// Pre:  t és un arbre no buit d'strings que representa una expressió correcta
//       sobre dígits i variables que guarden dígits, i els operadors +,* mòdul 10.
//       En particular, l'arrel de t és o bé +, o bé *, o bé un dígit, o bé una variable.
//       var2val és un mapeig de variables a dígits.
// Post: Retorna l'avaluació de l'expressió representada per t reemplaçant les variables
//       pels seus corresponents valors definits a var2val, o per 0 si no estan definides.
int evaluate(map<string, int> &var2val, BinTree<string> t)
{
    
    if (t.value()[0] >= '0' and t.value()[0] <= '9')
    {
        return t.value()[0] - '0';
    }
    else if (t.value()[0] >= 'a' and t.value()[0] <= 'z')
    {
        return var2val[t.value()];
    }
    else if (t.value() == "+")
    {
        return (evaluate(var2val, t.right()) + evaluate(var2val, t.left())) % 10;
    }
    else if (t.value() == "*")
    {
        return (evaluate(var2val, t.right()) * evaluate(var2val, t.left())) % 10;
    }
    
    return 0; //si no se cumple cualquier caso, es decir, el arbol es vacío
}

// Pre:  t és un arbre no buit d'strings que representa una instrucció correcta
//       del llenguatge de programació descrit a l'enunciat.
//       En particular, o bé és l'arbre buit,
//       o bé la seva arrel és, o bé =, o bé print, o bé if, o bé while,
//       o bé list, cas en el cual, representa una subllista d'instruccions.
// Post: S'ha simulat l'execució d'aquesta instrucció, modificant var2val
//       i escrivint el que calgui per la sortida estandar,
//       d'acord a aquesta simulació.
void execute(map<string, int> &var2val, BinTree<string> t)
{
    if (not t.empty())
    {
        if (t.value() == "while")
        {
            while (evaluate(var2val, t.left()) != 0)
                execute(var2val, t.right());
        }
        else if (t.value() == "if")
        {
            if (evaluate(var2val, t.left()) != 0)
                execute(var2val, t.right());
        }

        else if (t.value() == "print")
        {
            cout << evaluate(var2val, t.left()) << endl;
        }
        else if (t.value() == "list")
        {
            execute(var2val, t.left());
            execute(var2val, t.right());
        }
        else if (t.value() == "=")
            var2val[t.left().value()] = evaluate(var2val, t.right());
    }
}
