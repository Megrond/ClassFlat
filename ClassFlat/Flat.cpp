#include "Flat.h"

Flat& Flat::operator = (const Flat& apart) {
	if (this == &apart)
		return *this;
	price = apart.price;
	square = apart.square;
	return *this;
}
bool Flat::operator == (const Flat& apart) {
	return square == apart.square;
}
bool Flat::operator != (const Flat& apart) {
	return !(square == apart.square);
}
bool Flat::operator > (const Flat& apart) {
	return price > apart.price;
}
bool Flat::operator < (const Flat& apart) {
	return price < apart.price;
}

ostream& operator<<(ostream& out, const Flat& apart) {
	out << "Площадь: " << apart.square << ", Цена: " << apart.price;
	return out;
}