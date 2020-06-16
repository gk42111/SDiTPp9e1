#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<typename TYP> class Stos
{
private:
	vector<TYP> Kontener;
	int control = 0;
public:
	Stos() { Kontener.reserve(100); } //wbudowana w vector funkcja reseve umo¿liwia ustalenie pojemnoœci kontenera.
	//funkcje:
	void Clear();//wbudowana funkcja clean czyœci kontener
	bool IsEmpty(); // empty zwraca informacjê czy kontener jest pusty
	void Push(TYP El); // dodaje el. na koniec (!) wektora
	TYP TopEl(); //zwraca ostatni element wektora
	void Pop();

};
template<typename TYP>
inline void Stos<TYP>::Clear()
{
	Kontener.clear();
}

template<typename TYP>
inline bool Stos<TYP>::IsEmpty()
{
	if(Kontener.empty()) return true;
	else return false;
}

template<typename TYP>
inline void Stos<TYP>::Push(TYP El)
{
	if (control < 100) {
		Kontener.push_back(El);
		control++;
	}
	else std::cout << "ERROR" << std::endl;
}

template<typename TYP>
inline TYP Stos<TYP>::TopEl()
{
	return Kontener.back();
}

template<typename TYP>
inline void Stos<TYP>::Pop()
{
	Kontener.pop_back();
}

