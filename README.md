# Car Racing Game (C++ – Object-Oriented Programming) 

This project is a **console-based car racing game** developed in **C++** to demonstrate fundamental **Object-Oriented Programming (OOP)** concepts.  
Multiple players compete by rolling a dice, and the first player to reach the target distance wins the game.



## Project Objective

- To apply **Object-Oriented Programming principles** in C++
- To practice class design, constructors, encapsulation, and aggregation
- To build a modular, readable, and maintainable codebase



## OOP Concepts Used

### Encapsulation
- The `Player` class defines its attributes (`name`, `km`) as **private**
- Access is provided through **getter and setter methods**
- This ensures controlled and safe access to object data

### Constructors
- Constructors are used in `Player` and `Dice` classes
- Each player starts at `0 km`
- The `Dice` constructor initializes randomization using the current time

### Aggregation
- `RaceGame` does not own `Player` objects
- Players are created in `main` and passed to `RaceGame` as pointers
- This represents a **has-a relationship** without ownership dependency



## Game Rules 

| Dice Value | Action |
|-----------|--------|
| 6 | Move forward 6 km |
| 5 | Return to start (0 km) |
| 4 | Move forward 4 km |
| 3 | Move backward 3 km |
| 2 | No movement |
| 1 | Move backward 1 km |

**Winning Condition:**  
The first player to reach **10 km** wins the race.


## Project Structure (Header-Only)

CarRacingGame/
├── Dice.h
├── Player.h
├── Track.h
├── RaceGame.h
└── main.cpp


All class implementations are written directly inside `.h` files.  
The project follows a **header-only design** using include guards.

---

## Compilation 

```bash
g++ main.cpp -o race

## Execution

./race
