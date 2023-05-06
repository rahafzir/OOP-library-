#ifndef Lib_H
#define Lib_H
#pragma once
#include "Book.h"
class lib
{
private:
	list <Book>B;

public :
	lib();
	void add(int id, string name, int page, list<string> words);

	void delet (int id);
	void nextpage();
	void prevpage();
	void setactive( int id);
	void print();


};
#endif
