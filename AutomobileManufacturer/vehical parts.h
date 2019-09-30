//vehical_part.h : This file contains the defination 'engine','break_n_tyre' and 'suspension' class.
#pragma once
#include "convenience functions.h"
/*----------------------------------------ENGINE----------------------------------------*/
class engine {
	string fuel_type;
	int cylinders, strokes;
	float power;
	string transmission;
	struct {
		int PS{ 0 }, rpm{ 0 };
	}max_power;
	struct {
		int Nm{ 0 }, rpm{ 0 };
	}max_torque;
protected:
	void input();
	void output();
};

/*----------------------------------------brake'n'tyreS----------------------------------------*/

class break_n_tyre {
	string tyre_type, tyre_ply, break_type;
protected:
	void input();
	void output();
};

/*----------------------------------------SUSPENSION----------------------------------------*/

class suspension {
	string front_suspension, rear_suspension;
protected:
	void input();
	void bike_input();
	void car_input();
	void output();
};

extern bool _bike, _car;