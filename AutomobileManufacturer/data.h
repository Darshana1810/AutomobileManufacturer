//keep 1st string(i.e. string at [0]) in array empty.
//last string in array should be "end".

#pragma once
#include <string>

using namespace std;

/*----------------------------------------ENGINE----------------------------------------*/
//string array listing all the fuel types
const string fuels[]{
	"",
	"Diesel",
	"Patrol",
	"Electric",
	"end"
};

//string array listing all the transmission types
const string transmissions[]{
	"",
	"Automatic",
	"Semi-automatic",
	"Manual",
	"Continuously variable",
	"end"
};

/*----------------------------------------BRAKES'n'TYRES----------------------------------------*/
//array of string listing all the break types
const string brake[]{
	"",
	"Disk brake",
	"Drum brake",
	"end"
};

//array of string listing all the tyre types
const string tyres[]{
	"",
	"Tubed tyres",
	"Tubless tyres",
	"end"
};

//array of string listing all the tyre ply
const string ply[]{
	"",
	"Cross ply",
	"Radical ply",
	"Belted-bias ply",
	"end"
};

/*----------------------------------------SUSPENSION----------------------------------------*/
//array of string listing all bike suspensions
//front
const string bike_front_suspensions[]{
	"",
	"Telescopic forks",
	"Telescopic forks(Upside down)",
	"Hossack fork",
	"Single-sided",
	"Hub-center steering",
	"end"
};

//rear
const string bike_rear_suspensions[]{
	"",
	"Spring loaded hydraulic suspension",
	"Gas filled shock absorber",
	"Mono shock",
	"end"
};

//array of string listing all car suspensions
//front
const string car_front_suspensions[]{
	"",
	"Dependent front suspension",
	"Independent front suspension",
	"Macpherson suspension strut",
	"float wishbone",
	"Trailing arm suspension",
	"Twin i-beam suspension",
	"Four-bar",
	"Moulton rubber suspension",
	"Transverse leaf spring suspension",
	"end"
};

//rear
const string car_rear_suspensions[]{
	"",
	"Dependent rear suspension",
	"Independent rear suspension",
	"Solid axle",
	"Beam axle",
	"4-bar",
	"De dion suspension",
	"end"
};

/*----------------------------------------body material----------------------------------------*/

const string material[]{
	"",
	"Metal",
	"Fiber",
	"end"
};

/*----------------------------------------meter type----------------------------------------*/

const string meter_types[]{
	"",
	"Analog",
	"Digital",
	"end"
};
/*----------------------------------------engine position and drive type----------------------------------------*/
//engine position
const string eng_pos[]{
	"",
	"Front",
	"Mid",
	"Rear",
	"end"
};

//drive type
const string drive[]{
	"",
	"Front wheel drive",
	"Rear wheel drive",
	"Four wheel drive",
	"end"
};
/*----------------------------------------types of vehical----------------------------------------*/

//bike
const string bike_type[]{
	"",
	"Cruiser",
	"Off-road",
	"Touring",
	"Sports bike",
	"Standard",
	"Scooter",
	"end"
};

//car
const string car_type[]{
	"",
	"Hatchback",
	"Sedan",
	"MPV",
	"SUV",
	"Crossover",
	"Coupe",
	"Convertible",
	"end"
};