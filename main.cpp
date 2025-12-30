#include <iostream>
#include <vector>
#include "RaceGame.h"

using namespace std;

int main() {
    int count;
    cout << "ARABA YARISI\n";
    cout << "Kac arac yarisa katilacak? ";
    cin >> count;

    vector<Player*> players;
    for (int i = 0; i < count; i++) {
        string name;
        cout << i + 1 << ". Arac ismi: ";
        cin >> name;
        players.push_back(new Player(name));
    }

    RaceGame game(players);

    while (!game.hasWinner()) {
        game.playTurn();
    }

    for (Player* p : 
	players)
        delete p;

    return 0;
}

