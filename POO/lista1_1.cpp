#include <iostream>
#include <string>

using namespace std;

class AgendaTelefonica 
{
private:
    string nome;
    string telefone;

public:

    void setNome(const string &n) 
    {
        nome = n;
    }

    void setTelefone(const string &t) 
    {
        telefone = t;
    }

    void imprimirDados() const 
    {
        cout << "Nome: " << nome << ", Telefone: " << telefone << "\n";
    }
};

int main() 
{

    AgendaTelefonica agenda;
    agenda.setNome("Melissa Aragão");
    agenda.setTelefone("1234-5678");

    agenda.imprimirDados();

    return 0;
}

