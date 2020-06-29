#ifndef __LION_H__
#define __LION_H__

#include "mammal.h"

class Lion:public Mammals{

public:

    Lion(std::string name): Mammals(name){};
    /*virtual*/ short int getSpeed() const ;
    /*virtual*/ std::vector <Econtinants> getContinents() const ;
    /*virtual*/ int getFood() const ;
    /*virtual*/ short int getLifeExpectancy() const ;
    /*virtual*/ std::string getSpecies() const ;
    /*virtual*/ short int getFragrancyDuration() const ;
    /*virtual*/ short int getNumYoungBorn() const ;
protected:
    /*virtual*/ std::ostream& print(std::ostream& os) const ;

private:
    static const short int m_speed;
    static const short int m_fragrancyDuration;
    static const std::vector <Econtinants> m_continents;
    static const int m_food;
    static const short int m_lifeExpectancy;
    static const std::string m_specie;
    static const short int m_numYoungBorn;

};

std::ostream& Lion::print(std::ostream& os) const
{
    Animal::print(os);
    Mammals::print(os);
    os << "-----------" <<std::endl;
    return os;
}

inline short int Lion::getSpeed() const
{
    return m_speed;
}
inline std::vector<Econtinants> Lion::getContinents() const
{
    return m_continents;
}
inline int Lion::getFood() const
{
    return m_food;
}
inline short int Lion::getLifeExpectancy() const
{
    return m_lifeExpectancy;
}
inline std::string Lion::getSpecies() const
{
    return m_specie;
}
inline short int Lion::getFragrancyDuration() const
{
    return m_fragrancyDuration;
}
inline short int Lion::getNumYoungBorn() const
{
    return m_numYoungBorn;
}

const short int Lion::m_speed = 80;
const short int Lion::m_fragrancyDuration = 3;
const int Lion::m_food = Meat;
const short int Lion::m_lifeExpectancy = 14;
const std::string Lion::m_specie = "Feline";
const short int Lion::m_numYoungBorn = 4;
const std::vector <Econtinants> Lion::m_continents = {Asia, Africa,America,Australia};
#endif





