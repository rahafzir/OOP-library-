#include <iostream>
#include "lib.H"

int main()
{
	lib l1;
	for (int i = 0; i < 3; i++) {
		int id;
		string name;
		int page;
		list<string> words;
		cout << " enter book name " << endl;
		cin >> name;
		cout << " enter book id " << endl;
		cin >>  id ;
		cout << " enter book page  " << endl;
		cin >> page ;
		cout << " enter book  words " << endl;

		for (int i = 0; i < page; i++) {
			string temp;
			cin >> temp;
			words.push_back(temp);
		 }
		l1.add( id, name,  page, words);

	}
	l1.setactive(2);
	l1.nextpage();
	l1.print();
	l1.prevpage();
	l1.print();
	l1.delet(1);

}

