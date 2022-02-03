#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <vector>

class SpellBook 
{
    private:
        std::vector<ASpell*> arr;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *p);
        void forgetSpell(std::string const &sname);
        ASpell *launchSpell(std::string const &sname);
};

#endif
