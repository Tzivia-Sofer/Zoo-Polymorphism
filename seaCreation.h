#ifndef __SEACREATION_H__
#define __SEACREATION_H__

#include "animal.h"
#include "Iseacreation.h"

class SeaCreation: public Animal,public ISeaCreation{
public:
    SeaCreation(std::string &name):Animal(name){};
	virtual ~SeaCreation(){};
	virtual int getLowestDepth() const = 0;
protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const ;

};

std::ostream& SeaCreation::print(std::ostream& os) const
{
    Animal::print(os);
	os << "Lowest Depth: " << getLowestDepth()<<std::endl;
	return os;
}
#endif

