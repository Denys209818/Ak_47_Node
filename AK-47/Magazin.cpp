#include "libs.h"
#include "Magazin.h"

Magazin::Magazin()
{
	this->phead = nullptr;
	this->size = 1;
}

void Magazin::Push(Patron* a)
{
	Node* pnew = new Node();
	pnew->p = a;
	this->size++;
	if (this->phead == nullptr)
	{
		pnew->next = nullptr;
		this->phead = pnew;
		return;
	}

	pnew->next = this->phead;
	this->phead = pnew;
}

Patron* Magazin::Pop()
{
	if (this->phead == nullptr)
	{
		cout << "Magazin is empty!" << endl;
		return nullptr;
	}

	this->size--;
	Node* temp = this->phead;
	Patron* val = this->phead->p;
	this->phead = this->phead->next;
	delete temp;
	return val;
}

void Magazin::Clear()
{
	if (this->phead != nullptr)
	{
		Node* del = this->phead;
		while (del != nullptr)
		{
			delete this->phead->p;
			this->phead = this->phead->next;
			delete del;
			del = this->phead;

		}
	}
}

Magazin::~Magazin()
{
	this->Clear();
}