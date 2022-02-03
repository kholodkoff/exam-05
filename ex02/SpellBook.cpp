#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
        delete *it;
    arr.clear();
}

void SpellBook::learnSpell(ASpell *p)
{
    if (p)
    {
        for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
        {
            if ((*it)->getName() == p->getName())
                return;
        }
        arr.push_back(p->clone());
    }
}

void SpellBook::forgetSpell(std::string const &sname)
{
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        if ((*it)->getName() == sname)
        {
            delete *it;
            arr.erase(it);
            return;
        }
    }
}

// ОБЯЗАТЕЛЬНО ВЫУЧИТЬ !!!!!
ASpell *SpellBook::launchSpell(std::string const &sname)
{
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        if ((*it)->getName() == sname)
            return (*it);
    }
    return NULL;
}
