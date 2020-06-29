#ifndef __BIRDS_H__
#define __BIRDS_H__

#include "animal.h"
#include "Ibird.h"

class Bird : public Animal, public Ibird
{
public:
	Bird(std::string &name) : Animal(name) {};
	virtual ~Bird() {};
	virtual int getHeight() const = 0;
	virtual int getWingSpan() const = 0;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

};

std::ostream& Bird::print(std::ostream& os) const
{
	Animal::print(os);
	os << "Height " << getHeight()<<std::endl;
	os << "Wing Span " << getWingSpan()<<std::endl;
    os << "-----------" <<std::endl;
	return os;
}

#endif
