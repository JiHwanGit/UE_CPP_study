#include <iostream>
#include "state.h"
#include "Transition.h"

#include <map>
#include <vector>

using namespace std;



int main()
{
	
	map<int, State>States;
	States[1] = State(1, "��ȸ");

	vector<Transition> Transitions;

	Transitions.push_back(Transition(1, "���߰�", 2));

	int MonsterCurrentState = 1;
	string MonsterCondition = "���߰�";
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

//���� ���±�� (FSM)

