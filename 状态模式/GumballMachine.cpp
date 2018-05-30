#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine(int numberGumballs)
{
	this->count = numberGumballs;
	if (numberGumballs > 0)
		state = new NoQuarterState();
	else
		state = new SoldOutState();
}

//...  调出去
void GumballMachine::insertQuarter()
{
	state->insertQuarter(this);
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter(this);
}

void GumballMachine::turnCrank()
{
	state->turnCrank(this);
}

void GumballMachine::setState(State* state)
{
	this->state->Exit(this);
	this->state = state;
	this->state->Enter(this);
}

void GumballMachine::releaseBall()		//放进具体State中...
{
	cout << "获得一颗..." << endl;
	if (count != 0)		//...
		count--;
}

void GumballMachine::refill(int count)
{
	this->count = count;
	state = new NoQuarterState();
}
////////////////////////