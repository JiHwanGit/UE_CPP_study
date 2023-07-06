#include <iostream>

using namespace std;


class State {
public:
	int ID;
	string Name;
};

class Transition {
public:
	int CurrentStatus;
	string Condition;
	int NextState;
};

int main() {
	State State[4];
	Transition Transition[5];
	return 0;
}
