#ifndef __OWL__
#define __OWL__

#include "birds.h"

class Owl:public Bird{

public:
    Owl(std::string name): Bird(name) {};
    /*virtual*/ short int getSpeed() const ;
    /*virtual*/ std::vector <Econtinants> getContinents() const ;
    /*virtual*/ int getFood() const ;
    /*virtual*/ short int getLifeExpectancy() const ;
    /*virtual*/ std::string getSpecies() const ;
    /*virtual*/ int getHeight() const ;
    /*virtual*/ int getWingSpan() const ;

private:
    static const short int m_speed;
    static const int m_lowestDepth;
    static const std::vector <Econtinants> m_continents;
    static const int m_food;
    static const short int m_lifeExpectancy;
    static const std::string m_specie;
    static const int m_height;
    static const int m_wing_span;
};

inline short int Owl::getSpeed() const
{
    return m_speed;
}
inline int Owl::getWingSpan() const
{
    return m_wing_span;
}
inline int Owl::getHeight() const
{
    return m_height;
}
inline std::vector<Econtinants> Owl::getContinents() const
{
    return m_continents;
}
inline int Owl::getFood() const
{
    return m_food;
}
inline short int Owl::getLifeExpectancy() const
{
    return m_lifeExpectancy;
}
inline std::string Owl::getSpecies() const
{
    return m_specie;
}

const short int Owl::m_speed = 20;
const int Owl::m_food = Vegetarian;
const short int Owl::m_lifeExpectancy = 3;
const std::string Owl::m_specie = "Bird";
const std::vector <Econtinants> Owl::m_continents = {Europe,America, Australia};
const int Owl::m_height = 50;
const int Owl::m_wing_span = 4;

#endif





