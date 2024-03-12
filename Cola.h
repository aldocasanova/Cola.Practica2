#pragma once
#include <iostream>

using namespace std;

template <typename T>

class Cola
{

private:
	T* cola;
	int tope;
	int tamano;
public:
	Cola(int tamano);
	~Cola();
	void push(T dato);
	T pop();
	int getTope();
	bool estaVacia();
	bool estaLlena();
	void imprimir();
};


template<typename T>

inline Cola<T>::Cola(int _tamano)
{
	tamano = _tamano;
	cola = new T[tamano];
	tope = -1;
}

template<typename T>
inline Cola<T>::~Cola()
{
	delete[] cola;
}

template<typename T>
inline void Cola<T>::push(T dato)
{
	if (!estaLlena())
	{
		tope++;
		cola[tope] = dato;
	}
	else
	{
		cout << "La cola esta llena" << endl;
	}
}

template<typename T>
inline T Cola<T>::pop()
{
	if (!estaVacia())
	{
		T dato = cola[tope];
		tope--;
		return dato;
	}
	else
	{
		cout << "La cola esta vacia" << endl;
	}

}

template<typename T>
inline int Cola<T>::getTope()
{
	return tope;
}

template<typename T>
inline bool Cola<T>::estaVacia()
{

	return false;
}

template<typename T>
inline bool Cola<T>::estaLlena()
{
	if (tope >= tamano - 1)
	{
		return true;
	}
	return false;
}

template<typename T>
inline void Cola<T>::imprimir()
{
	for (int i = tope; i >= 0; i--)
	{
		cout << cola[i] << " ";
	}
	cout << endl;
}