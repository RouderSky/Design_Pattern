#ifndef __HASQUARTERSTATE_H__
#define __HASQUARTERSTATE_H__

#include "State.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class HasQuarterState:public State
{
public:
	HasQuarterState();
	void insertQuarter(StateMachine* stateMachine) override;
	void ejectQuarter(StateMachine* stateMachine) override;
	void turnCrank(StateMachine* stateMachine) override;
};

#endif