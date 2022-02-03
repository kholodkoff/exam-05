#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
    private:
        std::string attribute;
    public:
        ATarget(std::string const &attribute);
        virtual ~ATarget();

        std::string const &getType() const;
        void getHitBySpell(ASpell const &ref) const;
        virtual ATarget *clone() const = 0;
};

#endif
