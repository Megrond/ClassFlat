#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

class Flat {
    double price;
    double square;
public:
    Flat() :price(0), square(0) {};
    Flat(const double& prc, const double& squ) :price(prc), square(squ) {};
    Flat(const Flat& apart) :price(apart.price), square(apart.square) {};

    Flat& operator = (const Flat& apart);
    bool operator == (const Flat& apart);
    bool operator != (const Flat& apart);
    bool operator > (const Flat& apart);
    bool operator < (const Flat& apart);
    friend ostream& operator<<(ostream& out, const Flat& other);
};
