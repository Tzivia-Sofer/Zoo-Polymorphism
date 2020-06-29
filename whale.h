#ifndef __WHALE__
#define __WHALE__

#include "mammal.h"
#include "seaCreation.h"

class Whale:public IMammals, public SeaCreation{

public:

    Whale(std::string name): SeaCreation(name), IMammals(){};
    /*virtual*/ short int getSpeed() const ;
    /*virtual*/ std::vector <Econtinants> getContinents() const ;
    /*virtual*/ int getFood() const ;
    /*virtual*/ short int getLifeExpectancy() const ;
    /*virtual*/ std::string getSpecies() const ;
    /*virtual*/ short int getFragrancyDuration() const ;
    /*virtual*/ short int getNumYoungBorn() const ;
    /*virtual*/  int getLowestDepth() const ;
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
    static const int m_lowest_depth;

};

inline short int Whale::getSpeed() const
{
    return m_speed;
}
inline int Whale::getLowestDepth() const
{
    return m_lowest_depth;
}
inline std::vector<Econtinants> Whale::getContinents() const
{
    return m_continents;
}
inline int Whale::getFood() const
{
    return m_food;
}
inline short int Whale::getLifeExpectancy() const
{
    return m_lifeExpectancy;
}
inline std::string Whale::getSpecies() const
{
    return m_specie;
}
inline short int Whale::getFragrancyDuration() const
{
    return m_fragrancyDuration;
}
inline short int Whale::getNumYoungBorn() const
{
    return m_numYoungBorn;
}

const short int Whale::m_speed = 80;
const short int Whale::m_fragrancyDuration = 3;
const int Whale::m_food = Meat;
const short int Whale::m_lifeExpectancy = 14;
const std::string Whale::m_specie = "Whale";
const short int Whale::m_numYoungBorn = 4;
const int Whale::m_lowest_depth = -300;
const std::vector <Econtinants> Whale::m_continents = {Asia};

std::ostream& Whale::print(std::ostream& os) const
{
    SeaCreation::print(os);
    os << "FragrancyDuration " << getFragrancyDuration()<<std::endl
    << "NumYoungBorn " << getNumYoungBorn()<<std::endl
    << "-----------" <<std::endl;
    return os;
}

#endif