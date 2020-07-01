#include "libs.h"
#include "Ak.h"

ak::ak(Magazin* m)
{
	this->m = m;
}

void ak::Shoot()
{
	Patron* p = this->m->Pop();
	p->Shoot();
}

void ak::FullMagaz()
{
	Patron::id_ = (rand() % 100) + 1;
	while (this->m->size <= 30)
	{
		this->m->Push(new Patron());
	}
}

ak::~ak()
{
	delete this->m;
}