#include "libs.h"
#include "Patron.h"

Patron::Patron()
{
	this->id = ++Patron::id_;
	this->shance = 70;
}

void Patron::Shoot()
{
	if (this != nullptr)
	{
		cout << "Patron[" << this->id << "] - " << "  Shoot!!!  ";
		int ran = (rand() % 100) + 1;
		if (ran < 70)
		{
			cout << "hit!!!" << endl;
		}
		else
		{
			cout << "no hit!!!" << endl;
		}
	}
}