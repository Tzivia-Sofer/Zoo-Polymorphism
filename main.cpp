#include <vector>
#include "shark.h"
#include "owl.h"
#include "lion.h"
#include "whale.h"
int main()
{
    Lion lion1(std::string("Simba"));
    Lion lion2(std::string("Mofassa"));
    Shark shark1(std::string("Shark"));
    Shark shark2(std::string("Toto"));
    Owl bird1(std::string("Bibi"));
    Whale whale1(std::string("whale"));
    std::vector<Animal*> zoo = {&lion1, &lion2,&shark1,&shark2,&bird1, &whale1};
    for (std::vector<Animal*>::const_iterator i=zoo.begin(); i!=zoo.end(); i++)
    {
        std::cout<< **i;
    }

    return 0;
}