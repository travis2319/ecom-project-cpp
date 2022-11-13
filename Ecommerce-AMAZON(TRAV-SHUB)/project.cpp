/*
PROJECT: ECOMMERCE-SITE(BOOK)

	MEMBERS: 
	           TRAVIS FERNANDES - 21CE72
	           SHUBHAM NAIK     - 21CE67   */  

#include<iostream>
#include<conio.h>
using namespace std;


class site {
public:
	site() {
		cout << "WELCOME TO AMAZON " << endl << "####^^BOOKS AND EBOOKS^^#####" << endl;
	}
};

class seller {
	char sellerName[50];
	char officeAddress[100];
	char sellerEmail[75];
public:
	seller() {
		cout << "SELLER NAME: ";
		cout << "SELLER ADDRESS: ";
		cout << "EMAIL: ";
	}
};

class buyer {
	char name[50];
	char address[100];
	char email[75];
public:
	buyer() {
		cout << "Enter name:";
		cin >> name;
		cout << "Enter address: ";
		cin >> address;
		cout << "Enter email: ";
		cin >> email;
	}
};
class books {

};

class ebooks {

};

class cart {

};

class checkout {

};

void ecommerce_book() {
	int choice;
	while (1) {
		switch (choice) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
		}
	}
}


void main() {
	site amazon;
	_getch();
}