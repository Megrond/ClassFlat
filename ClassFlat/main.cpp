#include <iostream>
#include <Windows.h>
#include "Flat.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	Flat flat_one(25000, 70);
	Flat flat_two(45000, 55);
	Flat flat_thr;
	flat_thr = flat_one;

	cout << "Квартира №1:\t" << flat_one << endl;
	cout << "Квартира №2:\t" << flat_two << endl;
	cout << "Квартира №3:\t" << flat_thr << endl;
	cout << endl;

	flat_one == flat_two;
	if (flat_one == flat_two) {
		cout << "Квартира №1 равна по площади Квартире №2" << endl;
	}
	else {
		cout << "Квартира №1 НЕ равна по площади Квартире №2" << endl;
	}
	flat_one == flat_thr;
	if (flat_one == flat_thr) {
		cout << "Квартира №1 равна по площади Квартире №3" << endl;
	}
	else {
		cout << "Квартира №1 НЕ равна по площади Квартире №3" << endl;
	}

	flat_one < flat_two;
	if (flat_one < flat_two) {
		cout << "Квартира №1 дешевле Квартиры №2" << endl;
	}
	else {
		cout << "Квартира №1 дороже Квартиры №2" << endl;
	}

	flat_two > flat_thr;
	if (flat_two > flat_thr) {
		cout << "Квартира №2 дороже Квартиры №3" << endl;
	}
	else {
		cout << "Квартира №2 дешевле Квартиры №3" << endl;
	}

	return 0;
}