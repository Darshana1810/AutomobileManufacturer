#pragma once

#include <iostream>
#include <string>

using namespace std;

//converts sting to lower case
inline void l_case_string(string& s);

//checks if string a has a copy in array sting b[]
bool check(string& a, const string* b);

//displays array of string passed as arguement
int display(const string a[]);

//clean istream buffer
void clean_cin();

//get single character input
void get_char(char& a);

//get string input with whitespaces
void get_string(string& a);

//take input for "type" from list in var
void getdata(string type, const string* list, string& var);

//get a float values from istream(cin)
float get_num();

//gets an integer input from istream(cin)
short int get_int();

//gets an integer(with in range i.e. l <= num <= h) input from istream(cin)
short int get_int(int l, int h);

//boolean input
bool bool_input(bool&);

//display boolean value in terms of yes or no
void bool_output(bool&);