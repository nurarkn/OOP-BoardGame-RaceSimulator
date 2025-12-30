#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    int km;

public:
    Player(string n) : name(n), km(0) {}

	string getName() const {
    return name;
	}

	int getKm() const {
    return km;
	}

	void setKm(int distance) {
	    km = distance;
	    if (km < 0) km = 0;
	}
	
	void addKm(int value) {
	    km += value;
	    if (km < 0) km = 0;
	}
	
	void resetProgress() {
	    km = 0;
	}
};

#endif

