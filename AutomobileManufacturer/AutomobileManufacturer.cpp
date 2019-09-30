// CarManufacturer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "car_and_bike.h"
#include <vector>
class automobiles {
public:
	string name;
	int units_manufactured;
	date date_of_manufacture;
	void display() {
		cout << endl;
		cout.width(15);
		cout << name;
		cout.width(25);
		cout << units_manufactured;
		date_of_manufacture.display();
	}
};
class database {
	vector<bike> bikes;
	vector<car> cars;

	vector<automobiles> manufactured;
public:
	template <class T> void get(vector<T>& y);
	template<class T> int list(vector<T>& y);
	void create_new();
	void manufacture();
	void display_manufactured();
	void list_all();
};

template <class T> void database::get(vector<T>& y) {
	T x;
	int opt;
	x.input();
	cout << endl << "Details of Automobile created";
	x.output();
	y.push_back(x);
	cout << endl << "Automobile stored Successfully." << endl;
}

template <class T> int database::list(vector<T>& y) {
	int i;
	for (i = 0; i < y.size(); i++) {
		cout << endl << i + 1 << ". " << y[i].get_model_name();
	}
	return i;
}

void database::create_new() {
	int opt;
	bool choice;
	while (true) {
		cout << endl << "Select and enter your choice";
		cout << endl << "1.Bike";
		cout << endl << "2.Car";
		opt = get_int(1, 2);
		switch (opt) {
		case 1:
			get(bikes);
			break;
		case 2:
			get(cars);
			break;
		}
		cout << endl << "Do you want to create more automobile (y\\n) : ";
		bool_input(choice);
		if (choice == false)
			return;
	}
}

void database::manufacture() {
	int opt;
	automobiles A;
	cout << endl << "1. Manufacture Bike";
	cout << endl << "2. Manufacture Car";
	cout << endl << "3. GO back";
	opt = get_int(1, 2);
	switch (opt) {
	case 1: {
		cout << endl << "Enter your choice : ";
		int no_of_choices = list(bikes);
		opt = get_int(1, no_of_choices);
		A.name = bikes[opt - 1].get_model_name();
		cout << endl << "Enter Units to manufacture : ";
		cin >> A.units_manufactured;
		cout << endl << "Enter Date of Manufacture : ";
		A.date_of_manufacture.input();
		manufactured.push_back(A);

		break;
	}
	case 2: {
		cout << endl << "Enter your choice : ";
		int no_of_choices = list(cars);
		opt = get_int(1, no_of_choices);
		A.name = cars[opt - 1].get_model_name();
		cout << endl << "Enter Units to manufacture : ";
		cin >> A.units_manufactured;
		cout << endl << "Enter Date of Manufacture : ";
		A.date_of_manufacture.input();
		manufactured.push_back(A);
		break;
	}
	case 3:
		return;
	}
}

void database::display_manufactured() {
	cout.setf(ios::left, ios::adjustfield);
	cout.width(15);
	cout << "Name";
	cout.width(25);
	cout << "Units Manufactured";
	cout.width(25);
	cout << "Date of Manufactured";
	for (int i = 0; i < manufactured.size(); i++) {
		manufactured[i].display();
	}
}

void database::list_all() {
	while (true) {
		int opt;
		cout << endl << "1. Display all bikes";
		cout << endl << "2. Display all cars";
		cout << endl << "3. Go back";
		opt = get_int(1, 3);
		switch (opt) {
		case 1:
			if (bikes.empty())
				cout << endl << "No bikes have been designed yet";
			else {
				while (true) {
					cout << endl << endl << "Enter your choice to view specifications of bike : ";
					cout << endl << "List of Bikes :";
					int no_of_choices = list(bikes);
					cout << endl << "0. Go back";
					opt = get_int(0, no_of_choices);
					if (opt == 0)	break;
					bikes[opt - 1].output();
				}
			}
			break;
		case 2:
			if (cars.empty())
				cout << endl << "No cars have been designed yet";
			else {
				while (true) {
					cout << endl << endl << "Enter your choice to view specifications of bike : ";
					cout << endl << "List of cars :";
					int no_of_choices = list(cars);
					cout << endl << "0. Go back";
					opt = get_int(0, no_of_choices);
					if (opt == 0)	break;
					cars[opt - 1].output();
				}
			}
			break;
		case 3:
			return;
		}
	}
}

int main() {
	int choice;
	char opt;
	database d;
	do {
		cout << endl << "1. Create new automobile";
		cout << endl << "2. Display all available automobiles";
		cout << endl << "3. Manufacture automobile";
		cout << endl << "4. Display manufactured units";
		cout << endl << "5. Exit";
		choice = get_int(1, 5);
		switch (choice) {
		case 1:
			d.create_new();
			break;
		case 2:
			d.list_all();
			break;
		case 3:
			d.manufacture();
			break;
		case 4:
			d.display_manufactured();
			break;
		case 5:
			exit(0);
		}
	} while (true);
}