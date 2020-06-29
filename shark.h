#ifndef __SHARK_H__
#define __SHARK_H__

#include "seaCreation.h"

class Shark:public SeaCreation{

public:
    Shark(std::string name): SeaCreation(name) {};
    /*virtual*/ short int getSpeed() const ;
    /*virtual*/ std::vector <Econtinants> getContinents() const ;
    /*virtual*/ int getFood() const ;
    /*virtual*/ short int getLifeExpectancy() const ;
    /*virtual*/ std::string getSpecies() const ;
    /*virtual*/  int getLowestDepth() const ;

protected:
    /*virtual*/ std::ostream& print(std::ostream& os) const ;

private:
    static const short int m_speed;
    static const int m_lowestDepth;
    static const std::vector <Econtinants> m_continents;
    static const int m_food;
    static const short int m_lifeExpectancy;
    static const std::string m_specie;


};

std::ostream& Shark::print(std::ostream& os) const
{
    Animal::print(os);
    SeaCreation::print(os);
    os << "-----------" <<std::endl;
    return os;
}

inline short int Shark::getSpeed() const
{
    return m_speed;
}
inline std::vector<Econtinants> Shark::getContinents() const
{
    return m_continents;
}
inline int Shark::getFood() const
{
    return m_food;
}
inline short int Shark::getLifeExpectancy() const
{
    return m_lifeExpectancy;
}
inline std::string Shark::getSpecies() const
{
    return m_specie;
}
inline  int Shark::getLowestDepth() const
{
    return m_lowestDepth;
}

const short int Shark::m_speed = 80;
const int Shark::m_food = Spawn;
const short int Shark::m_lifeExpectancy = 10;
const std::string Shark::m_specie = "Shark";
const std::vector <Econtinants> Shark::m_continents = {Europe,America};
const int Shark::m_lowestDepth = -100;


#endif





