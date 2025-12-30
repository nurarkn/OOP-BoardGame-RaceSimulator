#ifndef RACEGAME_H
#define RACEGAME_H

#include <vector>
#include "Dice.h"
#include "Track.h"
#include "Player.h"

class RaceGame {
private:
    Dice dice;
    Track track;
    std::vector<Player*> players;
    int currentTurn;

public:
    RaceGame(vector<Player*> existingPlayers)
    : players(existingPlayers), currentTurn(0) {}

	void playTurn() {
    Player* p = players[currentTurn];

    cout << "\n------------------------------------";
    cout << "\nArac: " << p->getName();
    cout << "\nMevcut km: " << p->getKm();
    cout << "\nZari atmak icin Enter'a bas...";

    cin.ignore(1000, '\n');
    cin.get();

    int result = dice.roll();
    cout << "> Zar: " << result << endl;

    switch (result) {
        case 6: p->addKm(6); break;
        case 5: p->resetProgress(); break;
        case 4: p->addKm(4); break;
        case 3: p->addKm(-3); break;
        case 2: break;
        case 1: p->addKm(-1); break;
    }

    cout << "Yeni km noktasi: " << p->getKm() << endl;

    currentTurn = (currentTurn + 1) % players.size();
}

	bool hasWinner() {
    for (auto p : players) {
        if (p->getKm() >= track.goalKm)
            return true;
    }
    return false;
}
};

#endif

