/*
PROJECT: ECOMMERCE-SITE(BOOK)

	MEMBERS: 
	           TRAVIS FERNANDES - 21CE72
	           SHUBHAM NAIK     - 21CE67   */  

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


class site {
public:

};

class seller {
	
		char officeAddress[100];
		char sellerEmail[75];
public:
	seller() {
				cout << "SELLER NAME: ";
				char sellerName[100];
				cin.getline(sellerName, sizeof(sellerName));
				cout << "SELLER ADDRESS: ";
				cin >> officeAddress;
				cout << "EMAIL: ";
				cin >> sellerEmail;
			}
};

//	void list() {
//		cout << "1. The Law of Success in Sixteen Lessons\t249 rs" << endl
//			<< "2. Life's Amazing Secrets                \t160 rs" << endl
//			<< "3. The Power of Your Subconscious Mind   \t86 rs" << endl
//			<< "4. DO EPIC SHIT                          \t247 rs" << endl;
//	}
//};
////
////class seller {
////	char sellerName[50];
////	char officeAddress[100];
////	char sellerEmail[75];
////protected:
////	char itemName[30];
////	float price;
////public:
////	seller() {
////		cout << "SELLER NAME: ";
////		cin >> sellerName;
////		cout << "SELLER ADDRESS: ";
////		cin >> officeAddress;
////		cout << "EMAIL: ";
////		cin >> sellerEmail;
////	}
////	void addItem() {
////		cout << "ITEM NAME: ";
////		cin >> itemName;
////		cout << "PRICE: ";
////		cin >> price;
////	}
////	void showItem() {
////		
////	}
////};
//
//class buyer :public site, public cart {
//	char name[100];
//	char address[100];
//	char email[75];
//public:
//	buyer() {
//		cout << "Enter name:";
//		cin >> name;
//		cout << "Enter address: ";
//		cin >> address;
//		cout << "Enter email: ";
//		cin >> email ;
//		cout << endl;
//	}
//};
//
//
//class cart {
//public:
//	void cartt() {
//
//	}
//};
//
//
//
//int owner() { return 0; }
//int customer() { return 0; }
//int exit() { return 0; }
//
//
//void main() {
//	buyer customer;
//	
//	int choice =0;
//	cout << "Enter the choice: ";
//	cin >> choice;
//	while (1) {
//		switch (choice) {
//		case 1:
//			customer.list();
//			break;
//		case 2:
//			
//			break;
//		case 3:
//			exit();
//			break;
//		default:
//			cout << "ENTER ONLY 1,2 & 3 INPUTS " << endl;
//			break;
//
//		}
//	}
//	_getch();
//}

void user_as_seller() {
	cout << "YOU ARE LOGIN AS ''SELLER''" << endl;

	seller s1;

}
void user_as_buyer() {
	cout << "YOU ARE LOGIN AS ''BUYER''" << endl;
	


}
void ecommerce() {
	int ch;
	cout << "###########MENU############" << endl << "ENTER THE FOLLOWING:" << endl << "1. \tSELLER: " << endl << "2. \tBUYER" << endl;
	while (1) {
		
		cin >> ch;

		switch (ch) {
			
		case 1:
			user_as_seller();
			break;
		case 2:
			user_as_buyer();
			break;
		default:
			break;
		}
	}
}

void main() {
	ecommerce();

	_getch();
}