#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>
#include <vector>

enum Econtinants{
	Asia,
	Europe,
	Africa,
	America,
	Antartica,
	Australia

};

static const std::string continants_array [] = {"Asia", "Europe", "Africa", "America", "Antartica", "Australia"};

enum Efood{
	Vegetarian,
	Meat,
	Spawn

};

static const std::string food_array [] = { "Vegetarian", "Meat", "Spawn" };


class Animal {

public:
	Animal(std::string & name) :m_name(name ) {};
	virtual ~Animal(){};
	std::string getName() const { return m_name; };
	friend std::ostream& operator << (std::ostream& os, const Animal& animal);
	virtual short int getSpeed() const = 0;
	virtual std::vector <Econtinants> getContinents() const = 0;
	virtual int getFood() const = 0;
	virtual short int getLifeExpectancy() const = 0;
	virtual std::string getSpecies() const = 0;
protected:
    virtual std::ostream& print(std::ostream& os) const ;
	
private:
	const std::string m_name;
	
};

std::ostream& operator <<(std::ostream& os, const Animal& animal) {
	animal.print(os);
	return os;
}


inline std::ostream& Animal::print(std::ostream& os) const
{
	os << "Name: " << getName()<<std::endl;
	os << "LifeExpectancy: " << getLifeExpectancy()<<std::endl;
	os << "Species: " << getSpecies()<<std::endl;
	os << "Speed: " << getSpeed()<<std::endl;
    os << "Continents: ";
    std::vector<Econtinants> continents = getContinents();
	for (std::vector<Econtinants>::const_iterator i = continents.begin(); i != continents.end(); ++i)
		os << continants_array [*i] << ", ";

	os << std::endl<<"Type Of Food: " << food_array[getFood()]<<std::endl;

	return os;
}

#endif  
