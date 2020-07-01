#pragma once
#include "libs.h"
#include "Patron.h"
#include "Magazin.h"

class ak
{
private:
	Magazin* m = nullptr;
public:
	ak(Magazin* m);

	void Shoot();

	void FullMagaz();

	~ak();
};
