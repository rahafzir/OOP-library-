#ifndef Book_H
#define Book_H

#pragma once
using namespace std;
#include <string>
#include <list>
class Book
{ 
private:
	int id;
	string name;
	int page;
	list<string>words;
	bool status; 
	int count = 0;
public:
	Book(int id, string name, int page, list<string>words);
	void setid(int id );
	int getid();
	void setname(string name);
	string getname();
	list <string> getlist();
	void  setlist(list <string> list );
	void setstatus(bool status);
	bool getstatus();
	void nextpage();
	void prevpage();
	void printpage();
};

#endif // !1
