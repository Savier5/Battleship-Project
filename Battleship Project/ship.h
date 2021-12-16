#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <string>
using namespace std;


class ship {

private:
	const int frigate = 2;
	const int sub = 3;
	const int destroyer = 3;
	const int battleship = 4;
	const int aircraftCarrier = 5;

public:

	int getFrigate() { return frigate; }
	int getSub() { return sub; }
	int getDestroyer() { return destroyer; }
	int getBattleship() { return battleship; }
	int getAircraftCarrier() { return aircraftCarrier; }

};

#endif