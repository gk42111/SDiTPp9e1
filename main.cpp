#include <iostream>
#include "Stos.h"

using namespace std;
int main() {
	Stos<int> MojStos;
	MojStos.Push(1);
	MojStos.TopEl();
	MojStos.IsEmpty();
	MojStos.Pop();
	MojStos.Clear();
	system("Pause");
	return 0;
}