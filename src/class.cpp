#include "include/class.h"

car::car(float w, float l, float wi, float he)
{
    weight =w;
    height = he;
    length =l;
    width =wi;
}

void car::printSpecs()
{
    std::cout<< "weight:  " << weight;
    std::cout<< "\nnheight:  " << height;
    std::cout<< "\nlength:  " << length;
    std::cout<< "\nwidth:  " << width;

}

