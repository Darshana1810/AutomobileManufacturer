//vehical.h : This file contains the declaration of vehical class.
#pragma once
#include "vehical parts.h"
#include "date.h"

class vehical : private engine, private break_n_tyre, private suspension {
	float length, breadth, height;
	float weight;
	string body_material, meter;
protected:
	void input();
	void output();
};