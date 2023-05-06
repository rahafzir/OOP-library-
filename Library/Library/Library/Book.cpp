#ifndef Book_CPP
#define Book_CPP

#include "Book.h"
#include <iostream>

using namespace std; 
Book::Book(int id, string name, int page, list<string> words)
{
	this->id = id;
	this->name = name;
	this->page = page;
	this->words = words;
}

void Book::setid(int id)
{
	this->id = id;
}

int Book::getid()
{
	return this->id;
}

void Book::setname(string name)
{
	this->name = name; 

}

string Book::getname()
{
	return this->name;
}

void Book::setlist(list<string> list)
{
	this->words = list;

} 

list<string> Book::getlist()
{
	return this->words;
}


void Book::setstatus(bool status)
{
	this->status = status;
}

bool Book::getstatus()
{
	return this->status;
}

void Book::nextpage()
{
	if (count < page) {
		this->count += 1;
	}

}

void Book::prevpage()
{
	if (count > 0) {
		this->count -= 1;
	}
}

void Book::printpage()
{
	int i = 0;
	for (auto x: words) {
		if (i == count) {
			cout << x.data();
			break;
		}
		i++;
	}
}
#endif
