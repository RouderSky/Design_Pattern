#ifndef __FLOCK_H__
#define __FLOCK_H__

#include "IQuackable.h"
#include <vector>
using namespace std;

class Flock : public IQuackable
{
private:
	vector<IQuackable*> quackers;
public:
	void add(IQuackable* quacker);
	void quack() override;
	void registerObserver(IObserver * o) override;
	void removeObserver(IObserver * o) override;
	void notifyObserver() override;
};

#endif



