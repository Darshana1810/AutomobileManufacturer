//vehical.cpp : This file contains the defination of members of vehical class.

#include "vehical.h"
#include "data.h"

void vehical::input() {
	engine::input();
	break_n_tyre::input();
	suspension::input();
	cout << endl << "Enter lenght of vehical :";
	length = get_num();
	cout << endl << "Enter breadth of vehical :";
	breadth = get_num();
	cout << endl << "Enter height of vehical :";
	height = get_num();
	cout << endl << "Enter weight of vehical :";
	weight = get_num();
	getdata("body matarial", material, body_material);
	getdata("meter", meter_types, meter);
}

//displays output of engine class
void vehical::output() {
	engine::output();
	break_n_tyre::output();
	suspension::output();
	cout << endl << endl << "Vehical dimension and weight";
	cout << endl << "Lenght of vehical : " << length;
	cout << endl << "Breadth of vehical : " << breadth;
	cout << endl << "Height of vehical : " << height;
	cout << endl << "Weight of vehical : " << weight;
	cout << endl << "Body Material : " << body_material;
	cout << endl << endl << "Other info ";
	cout << endl << "Meter Type : " << meter;
}