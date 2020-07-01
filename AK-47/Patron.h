#pragma once
#include "libs.h"

class Patron
{
private:
	int id;
	int shance;
public:
	static int id_;
	Patron();

	void Shoot();
};
