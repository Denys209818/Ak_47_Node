#include "libs.h"
#include "Patron.h"
#include "Magazin.h"
#include "Ak.h"


int Patron::id_ = 0;



void main() 
{
	srand(time(0));
	Patron::id_ = (rand() % 100) + 1;
	Magazin * m = new Magazin();
	for (int i = 0; i< 30; i++) 
	{
	  m->Push(new Patron());
	}
	ak a(m);
	cout << "Full magazin - press +" << endl;
	while (true) 
	{
	char ch = _getch();
	switch (ch) 
	{
	  case '+': 
	  {
		  a.FullMagaz();
		  system("cls");
	      cout << "Full magazin - press +" << endl;
		  break;
	  }
	  default: 
	  {
		  a.Shoot();
		  break;
	  }
	}
	
	
	}

	

	
	
	
}