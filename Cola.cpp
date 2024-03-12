#include <iostream>
#include "Cola.h"

using namespace std;

//template <typename T>
template <class T>
T sumar(T a, T b) {
	return a + b;
}

template <class T, class U>
class A {
public:
	T a;
	T b;
	U c;
	U d;
	A(T a, T b) : a(a), b(b) {}
	T sumar() {
		return a + b;
	}


};

int main() {
	Cola<string> cola(6);
	cola.push("juan");
	cola.push("pedro");
	cola.push("pablo");
	cola.push("mateo");
	cola.push("marcos");
	cola.push("judas");

	cola.imprimir();

	string aux = cola.pop();

	cola.imprimir();

	cout << sumar<int>(10, 23) << endl;
	cout << sumar<int>(45, 63) << endl;
	cout << sumar<float>(9.11, 21.2) << endl;

	return 0;
}