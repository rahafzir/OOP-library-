#ifndef Lib_CPP
#define Lib_CPP
#include "lib.h"

lib::lib()
{
}

void lib::add(int id, string name, int page, list<string> words)
{

	Book b1(id, name, page, words);
	this->B.push_back(b1);
}
void lib::delet(int id)
{
	list<Book>::iterator it;
	it = this->B.begin();
	for (auto &z : this->B) {
		if (z.getid() == id) {
			this->B.erase(it);
			break;
		}
		advance(it, 1);
	
	}
}

void lib::nextpage()
{
	for (auto &x : this->B)
	{
		if (x.getstatus() == true)
		{
			x.nextpage();
			break;
		}
	}
}

void lib::prevpage()
{
	for (auto &x : this->B)
	{
		if (x.getstatus() == true)
		{
			x.prevpage();
			break;
		}
	}
}


void lib::setactive( int id )
{
	for (auto &r : this->B) {
		r.setstatus(false);
}
	 
	for (auto &r : this->B) {
		if (r.getid() == id) {
				r.setstatus(true);
				r.printpage();
		 }
	}

}
void lib::print()
{
	for (auto &x : this->B)
	{
		if (x.getstatus() == true)
		{
			x.printpage();
			break;
		}
	}
}
#endif
