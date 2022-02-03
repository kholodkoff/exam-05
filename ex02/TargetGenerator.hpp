#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"
#include <vector>

class TargetGenerator 
{
    private:
        std::vector<ATarget*> arr;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *p);
        void forgetTargetType(std::string const &type);
        ATarget *createTarget(std::string const &type);
};

#endif
