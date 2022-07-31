#include <iostream>
using namespace std;
#include "booking.h"
#include "vehicle.h"
#include "customer.h"
#include "admin.h"
#include "person.h"
#include "governmentTax.h"

int booking::ratePerDay = 0;         // initailiazation of static variable
 
int main()
{  
	cout << "                  ---------------------------------------------" << endl;
	cout << "                                 WELCOME TO                    " << endl;
	cout << "                             RENT A CAR SYSTEM                 " << endl;
	cout << "                  ---------------------------------------------" << endl;
	cout << "                                 CREATED BY:                   " << endl;
	cout << "                                 HARIS KAYANI                  " << endl;
	cout << "                                 FAHAD SHABBIR                 " << endl;
	cout << "                                 ABDUL REHMAN                  " << endl;
	cout << "                                 ZAIN ISLAM                         " << endl;
	cout << "                  ---------------------------------------------" << endl;
	
	cout << endl;
	char c;
	cout << " Enter Any key to Start : ";
	cin >> c;
	cout << endl;


	
	




	int choice;
	cout << "Press 1 for Customer Login. " << endl;
	cout << "Press 2 for Admin Login. " << endl;
	cout << "Enter : ";
	cin >> choice;
	if (choice == 1)
	{

		customer C;
		C.person::Info();              // call the function (method) of a class with the object of an other class

		person* P = new customer;           //  Ploymorphism
		P->Info();


		booking B;
		B.addBooking();

		cout << endl;
		char op;
		cout << " Do you want to Edit Booking Details? " << endl;
		cout << endl;
		cout << " Press 1 for Editing " << endl;
		cout << " Press any Key Skip " << endl;
		cout << " Enter : " << endl;
		cin.ignore();
		cin.get(op);
		if (op == '1')
		{
			B.editBooking();
		}
		else
		{
			cout << endl;
		}



		cout << endl;
		cin.ignore();
		bool ch = false;
		while (ch != true)
		{
			cout << endl;
			char ok;
			cout << " Do you want to Confirm Booking (Y / N):";
			cin >> ok;
			if (ok == 'y' || ok == 'Y')
			{
				cout << "          ----                            Your Booking is confirmed                           ----" << endl;
				ch = true;
			}
			else if (ok == 'n' || ok == 'N')
			{
				B.cancelBooking();
				ch = true;
			}
			else
			{
				cout << endl;
				cout << " You enter wrong command, please Re-Enter. " << endl;
				cout << endl;
				ch = false;
			}
		}

		cout << endl;
		cout << endl;
		cout << "                                            Booking Information                                         " << endl;
		cout << endl;

		cout << " Name of Tenant : " << C.getName() << endl;
		cout << " Age : " << C.getAge() << endl;
		cout << " Gender : " << C.getGender() << endl;
		cout << endl;


		B.display();

	}
	if (choice == 2)
	{
		cin.ignore();
		bool ch = false;
		while (ch != true)
		{

			cout << endl;
			cout << endl;
			char* pass = new char[10];
			//cin.ignore();
			cout << " Enter Password (Hint: Name of our country ) : ";
			cin.getline(pass, 9);

			if (pass[0] == 'P' || pass[0] == 'p')
			{
				if (pass[1] == 'A' || pass[1] == 'a')
				{
					if (pass[2] == 'K' || pass[2] == 'k')
					{
						if (pass[3] == 'I' || pass[3] == 'i')
						{
							if (pass[4] == 'S' || pass[4] == 's')
							{
								if (pass[5] == 'T' || pass[5] == 't')
								{
									if (pass[6] == 'A' || pass[6] == 'a')
									{
										if (pass[7] == 'N' || pass[7] == 'n')
										{

											ch = true;
											//cout << "OK" << endl;
											break;


										}
									}
								}
							}
						}
					}
				}
			}
			else if (ch == false)
			{
				cout << " You enter wrong password, please Re-Enter " << endl;

			}
			delete[]pass;

		}

		cout << endl;
		cout << " Press Enter Button " << endl;
		cout << endl;
		admin A;
		A.person::Info();               // Call the function (method) of a class with the object of an other class
		//cout << A.getName() << endl;


		person* p = new admin;      // polymorphism
		p->Info();

		bool c1 = false;
		while (c1 != true)
		{
			char choice1;
			cout << " Press 1 for Edit booking details " << endl;
			cout << " Press 2 for Display booking details " << endl;
			cout << " Enter : ";
			cin >> choice1;

			if (choice1 == '1')
			{
				c1 = true;
				cout << endl;
				cout << " There is no data for Editing " << endl;
				cout << endl;
			}
			else if (choice1 == '2')
			{
				c1 = true;
				cout << endl;
				cout << " There is no data for display " << endl;
				cout << endl;
			
			}
			else
			{
				cout << endl;
				cout << " You enter wrong command, please Re-Enter " << endl;
				cout << endl;
			}

		}
	}


	
	return 0;
}   