//vehical_part.cpp : This file contains the definations of allthe convenience functions.
#include "convenience functions.h"
#include "data.h"

/*--------------------------convenience functions-------------------------*/
//converts sting to lower case
inline void l_case_string(string& s) {
	bool isFirstChar = true;
	for (auto& x : s) {
		if (isFirstChar) {
			isFirstChar = false;
			x = toupper(x);
		}
		else
			x = tolower(x);
	}
}

//checks if string a has a copy in array of strings b[]
bool check(string& a, const string* b) {
	l_case_string(a);
	for (int i = 1; b[i].compare("end") != 0; i++) {
		if (b[i].compare(a) == 0) {
			return true;
		}
	}
	return false;
}

//displays array of string passed as arguement
int display(const string a[]) {
	int i;
	for (i = 1; a[i].compare("end") != 0; i++) {
		cout << endl << i << ") " << a[i];
	}
	return i - 1;
}

//clean istream buffer
void clean_cin() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void get_char(char& a) {
	cout << "\n>";
	cin >> a;
}

void get_string(string& a) {
	cout << "\n>";
	cin.ignore();
	getline(cin, a);
}

void getdata(string type, const string* list, string& var) {
	cout << endl << "Select and Enter " << type << " type:";
	cout << endl << "Availabale " << type << " types : ";
	int no_of_options = display(list);
	//int input
	short int y = get_int(1, no_of_options);
	var = list[y];
	cout << "You have selected : " << var << endl;
	//string input
	/*while (true) {
		get_string(var);
		if (check(var, list) == true)
			break;
		else
			cout << "Unexpected input" << endl << "Try again";
	}*/
}

//get a float values from istream(cin)
float get_num() {
	char x;
	float i;
	while (true) {
		get_char(x);
		if (isdigit(x)) {
			cin.putback(x);
			cin >> i;
			return i;
		}
		cout << "Invalid.";
	}
}

//gets an integer input from istream(cin)
short int get_int() {
	char x;
	int i;
	while (true) {
		get_char(x);
		if (isdigit(x)) {
			cin.putback(x);
			cin >> i;
			return i;
		}
		cout << "Invalid.";
	}
}

//gets an integer(with in range i.e. l <= num <= h) input from istream(cin)
short int get_int(int l, int h) {
	while (true) {
		int i = get_int();
		if (i >= l && i <= h)
			return i;
		else {
			cout << "Out of Range.";
			cout << "Enter Again.";
		}
	}
}

bool bool_input(bool& x) {
	string in;
	while (true) {
		cin >> in;
		if (in == "y" || in == "yes" || in == "1")
			return x = true;
		else if (in == "n" || in == "no" || in == "0")
			return x = false;
		cout << "Unexpected input.";
		cout << endl << "Enter again.";
	}
}

void bool_output(bool& x) {
	if (x == true)
		cout << "Yes";
	else
		cout << "No";
}