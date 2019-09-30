//engine.cpp : This file contains the 'member functions' of 'engine','break_n_tyre' and 'suspension' class.
#include "vehical parts.h"
#include "data.h"

/*-------------------------ENGINE--------------------------*/
//takes input for engine class

void engine::input() {
	getdata("transmission", transmissions, transmission);
	cout << endl << "Enter number of Cylinders : ";
	cylinders = get_int();
	cout << endl << "Enter number of Strokes : ";
	strokes = get_int();
	getdata("fuel", fuels, fuel_type);
	cout << endl << "Enter Displacement (in CC) : ";
	power = get_num();
	cout << endl << "Enter Max Power (in PS @ RPM) : " << endl;
	cout << "PS: ";
	max_power.PS = get_int();
	cout << "@ RMP: ";
	max_power.rpm = get_int();
	cout << endl << "Enter Max Torque (in Nm @ RPM) : " << endl;
	cout << "Nm: ";
	max_torque.Nm = get_int();
	cout << "@ RMP: ";
	max_torque.rpm = get_int();
	//	clean_cin();//cleaning istream buffer after input operation;
}

//displays output of engine class
void engine::output() {
	cout << endl << "Engine and Transmission Details : ";
	cout << endl << "Transmission : " << transmission;
	cout << endl << "Number of Cylinders : " << cylinders;
	cout << endl << "Number of Strokes : " << strokes;
	cout << endl << "Fuel Type : " << fuel_type;
	cout << endl << "Displacement (in CC) : " << power;
	cout << endl << "Max Power : ";
	cout << max_power.PS << " PS @ ";
	cout << max_power.rpm << " RMP ";
	cout << endl << "Max Torque : ";
	cout << max_torque.Nm << " Nm @ ";
	cout << max_torque.rpm << " RMP ";
}

/*-------------------------brake'n'tyreS-------------------------*/
void break_n_tyre::input() {
	getdata("tyre ply", ply, tyre_ply);
	getdata("tyre", tyres, tyre_type);
	getdata("break", brake, break_type);
}

//displays output of break_n_tyre class
void break_n_tyre::output() {
	cout << endl << endl << "tyre and brake Details : ";
	cout << endl << "Type of tyre ply : " << tyre_ply;
	cout << endl << "Type of tyre : " << tyre_type;
	cout << endl << "Type of break : " << break_type;
}

/*----------------------------------------SUSPENSION----------------------------------------*/
void suspension::input() {
	if (_bike == true)
		bike_input();
	else if (_car == true)
		bike_input();
	else
		cout << endl << "vehical_type bit not set";
	_bike = false, _car = false;//reset bits to false
}

void suspension::bike_input() {
	getdata("front suspension", bike_front_suspensions, front_suspension);
	getdata("rear suspension", bike_rear_suspensions, rear_suspension);
}

void suspension::car_input() {
	getdata("front suspension", car_front_suspensions, front_suspension);
	getdata("rear suspension", car_rear_suspensions, rear_suspension);
}

void suspension::output() {
	cout << endl << endl << "Suspension Details : ";
	cout << endl << "Front Suspension type : " << front_suspension;
	cout << endl << "Rear Suspension type : " << rear_suspension;
}