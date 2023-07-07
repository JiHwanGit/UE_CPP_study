#include <iostream>
#include "state.h"
#include "Transition.h"

#include <map>
#include <vector>

using namespace std;



int main()
{
	
	map<int, State>States;
	States[1] = State(1, "배회");

	vector<Transition> Transitions;

	Transitions.push_back(Transition(1, "적발견", 2));

	int MonsterCurrentState = 1;
	string MonsterCondition = "적발견";
	int MonsterNextState = 0;

	for (int i = 0; i < Transitions.size(); ++i)
	{
		if(Transitions[i].CurrentState == MonsterCurrentState &&
			Transitions[i].Condition == MonsterCondition) 
		{
			MonsterNextState = Transitions[i].NextState;
		}
	}
	

	return 0;
}

//유한 상태기계 (FSM)

