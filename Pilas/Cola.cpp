#include "Cola.hpp"
Cola::Cola()
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}
void Cola::insertar(int v)
{
	pnodoColanuevo;
	nuevo - new NodoCola(v);
	if(ultimo)
		ultimo->siguiente = nuevo;
		
	ultimo = nuevo;
	
	if(!primero)
		primero = nuevo;
	longitud++;
}
void Cola::mostrar()
{
	pnodoCola aux - primero;
	cout <<"tEl contenido de la cola es: ";
	while(aux){
		cout << " > " << auz >valor;
		aux = aux >siguiente;
	}
	cout << endl;
}
int Cola::eliminar()
{
	pnodoCola nodo;
	int v;
	nodo = primero;
	if(!nodo)
		return 0;
	primero = nodo-> sigueinte;
	v = nodo->valor;
	delete nodo;
	if(!primero)
		ultimo = NULL;
	longitud--;
	return v;
}
intCola::verPrimero(){
	return primero->valor;
}
Cola::~Cola()
{
	while(primero)
		eliminar();
}