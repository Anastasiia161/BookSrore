#include<iostream>
#include<string.h>
#include<stdlib.h>
#include "book.h"
using namespace std;

int main()
{
	Book* book[20];
	int i = 0, r, k, choice;
	char titlebuy[20], authorbuy[20];
	while (1) {
		cout << "\n\n\tMENU"
			<< "\n1. Entry of New Book"
			<< "\n2. Sell a Book"
			<< "\n3. Search For Book"
			<< "\n4. Edit Details Of Book"
			<< "\n5. Exit"
			<< "\n\nEnter your Choice: ";
		cin >> choice;

		switch (choice) {
		case 1:	book[i] = new Book;
			book[i]->add_new_book();
			i++;	break;

		case 2: cin.ignore();
			cout << "\nEnter Title Of Book: "; cin.getline(titlebuy, 20);
			cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);
			for (k = 0; k < i; k++) {
				if (book[k]->search(titlebuy, authorbuy)) {
					book[k]->sell_a_book();
					break;
				}
			}
			if (k == 1)
				cout << "\nThis Book is Not in Stock";

			break;
		case 3: cin.ignore();
			cout << "\nEnter Title Of Book: "; cin.getline(titlebuy, 20);
			cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);

			for (k = 0; k < i; k++) {
				if (book[k]->search(titlebuy, authorbuy)) {
					cout << "\n! Book Found Successfully";
					book[k]->showdata();
					break;
				}
			}
			if (k == i)
				cout << "\nThis Book is Not in Stock";
			break;

		case 4: cin.ignore();
			cout << "\nEnter Title Of Book: "; cin.getline(titlebuy, 20);
			cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);

			for (k = 0; k < i; k++) {
				if (book[k]->search(titlebuy, authorbuy)) {
					cout << "\nBook Found Successfully";
					book[k]->editdata();
					break;
				}
			}
			if (k == i)
				cout << "\nThis Book is Not in Stock";
			break;

		case 5: exit(0);
		default: cout << "\nInvalid Choice Entered";

		}
	}
}

