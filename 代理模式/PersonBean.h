#ifndef __PERSONBEAN_H__
#define __PERSONBEAN_H__

#include <iostream>
using namespace std;

class PersonBean
{
public:
	virtual string getName() = 0;
	virtual string getGender() = 0;
	virtual string getInterests() = 0;
	virtual int getHotOrNotRating() = 0;

	virtual void setName(string name) = 0;
	virtual void setGender(string gender) = 0;
	virtual void setInterests(string interests) = 0;
	virtual void setHotOrNotRating(int rating) = 0;

	static PersonBean* Create(string type, PersonBean* realPersonBean);
};

#endif