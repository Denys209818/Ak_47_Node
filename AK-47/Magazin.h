#pragma once
#include "libs.h"
#include "Patron.h"



class Magazin
{
	struct Node
	{
		Patron* p;
		Node* next;
	};

	Node* phead;
	int size;
public:
	Magazin();

	void Push(Patron* a);

	Patron* Pop();

	void Clear();

	~Magazin();

	friend class ak;
};