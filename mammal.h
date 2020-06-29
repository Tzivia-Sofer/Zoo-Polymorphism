#ifndef __MAMMAL_H__
#define __MAMMAL_H__

#include "animal.h"
#include "Imammal.h"


class Mammals : public Animal, public IMammals
{
public:
	Mammals(std::string &name):Animal(name) {};
	virtual ~Mammals(){};
	virtual short int getFragrancyDuration() const =0;
	virtual short int getNumYoungBorn() const = 0;
protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

};

inline std::ostream&  Mammals::print(std::ostream& os) const
{
    Animal::print(os);
	os << "FragrancyDuration " << getFragrancyDuration()<<std::endl;
	os << "NumYoungBorn " << getNumYoungBorn()<<std::endl;
	return os;
}

#endif

