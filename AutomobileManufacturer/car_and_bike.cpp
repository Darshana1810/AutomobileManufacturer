#include "car_and_bike.h"
#include "data.h"
bool _bike = false, _car = false;
/*----------------------------------------bike----------------------------------------*/
/*bike::bike(bike& b) {
	type = b.type;
	center_stand = b.center_stand;
}*/
void bike::input() {
	_bike = true;
	vehical::input();
	cout << endl << "Enter Model Name : ";
	get_string(model);
	getdata("bike", bike_type, type);
	cout << endl << "Is center stand present(y\\n) : ";
	bool_input(center_stand);
}

void bike::output() {
	cout << endl << "Model Name : " << model;
	cout << endl << "Type : " << type;
	bool_output(center_stand);
	cout << endl;
	vehical::output();
	cout << endl << "Center Stand : ";
}

string bike::get_model_name() {
	return model;
}

/*----------------------------------------Car----------------------------------------*/

void car::input() {
	_car = true;
	vehical::input();
	cout << endl << "Enter Model Name : ";
	get_string(model);
	getdata("car", car_type, type);
	getdata("Engine Position", eng_pos, engine_pos);
	getdata("Drive", drive, drive_type);
}

void car::output() {
	cout << endl << "Model Name : " << model;
	cout << endl << "Car type : " << type;
	vehical::output();
	cout << endl << "Engine position : " << engine_pos;
	cout << endl << "Drive type : " << drive_type;
}

string car::get_model_name() {
	return model;
}