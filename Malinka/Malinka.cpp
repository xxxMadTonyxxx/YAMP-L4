#include <iostream>
using namespace std;
int main() {
	int* pa, * pb;
	pa = new int; // выделяется 4 Б из «кучи»
	*pa = 21;
	pb = pa; // pb и pa указывают на одну область памяти
	cout << *pa << "\t" << *pb << "\t" << pa << "\t" << pb << endl;
	pb = new int; // выделяется 4 Б из «кучи»
	*pb = 28;
	cout << *pa << "\t" << *pb << "\t" << pa << "\t" << pb << endl;
	//освобождаем pb
	delete pb;
	cout << *pa << "\t" << *pb << "\t" << pa << "\t" << pb << endl;
	//освобождаем pa
	delete pa;
	system("pause");
	return 0;
}
