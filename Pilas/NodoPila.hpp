#include <iostream>
using namespace std;

class NodoPila
{
public:
	Nodopila(int v, NodoPila* sig = NULL);
	~NodoPila();
	
private:
	int valor;
	NodoPila* siguiente;
	friend class Pila;
	
};

typedef Nodopila* pnodoPila;