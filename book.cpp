#include<iostream>
#include<string.h>
#include<stdlib.h>
#include "book.h"
using namespace std;
void Book::add_new_book() {
	cin.ignore();
	cout << "\nEnter Author Name: ";      cin.getline(author, 20);
	cout << "Enter Title Name: ";       cin.getline(title, 20);
	cout << "Enter Publisher Name: ";   cin.getline(publisher, 20);
	cout << "Enter Price: ";            cin >> *price;
	cout << "Enter Stock Position: ";   cin >> *stock;
	cout << "! Book saved successfully";

}

void Book::editdata() {

	cout << "\nEnter Author Name: ";      cin.getline(author, 20);
	cout << "Enter Title Name: ";       cin.getline(title, 20);
	cout << "Enter Publisher Name: ";   cin.getline(publisher, 20);
	cout << "Enter Price: ";            cin >> *price;
	cout << "Enter Stock Position: ";   cin >> *stock;

}

void Book::showdata() {
	cout << "\nAuthor Name: " << author;
	cout << "\nTitle Name: " << title;
	cout << "\nPublisher Name: " << publisher;
	cout << "\nPrice: " << *price;
	cout << "\nStock Position: " << *stock;

}

int Book::search(char tbuy[20], char abuy[20]) {
	if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
		return 1;
	else return 0;

}

void Book::sell_a_book() {
	int count;
	cout << "\nEnter Number Of Books to buy: ";
	cin >> count;
	if (count <= *stock) {
		*stock = *stock - count;
		cout << "\nBooks Bought Sucessfully";
		cout << "\nAmount payable in rubles:  " << (*price) * count;
	}
	else
		cout << "\nRequired Copies not in Stock";
}
