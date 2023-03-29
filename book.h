#pragma once
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class Book {
private:
	char* author, * title, * publisher;
	float* price;
	int* stock;
public:
	Book() {
		author = new char[20];
		title = new char[20];
		publisher = new char[20];
		price = new float;
		stock = new int;
	}
	void add_new_book();
	void editdata();
	void showdata();
	int search(char[], char[]);
	void sell_a_book();
	~Book() {
		delete[]author;
		delete[] title;
		delete[] publisher;
		delete price;
		delete stock;
	}
};

