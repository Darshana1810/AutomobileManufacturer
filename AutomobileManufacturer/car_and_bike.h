#pragma once
#include "date.h"
#include "vehical.h"

class bike :private vehical {
	string model, type;
	bool center_stand;
public:
	void input();
	void output();
	string get_model_name();
};

class car :private vehical {
	string model, type, engine_pos, drive_type;
public:
	void input();
	void output();
	string get_model_name();
};