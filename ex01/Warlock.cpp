#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

// ВЫУЧИТЬ
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
        delete *it;
    arr.clear();
}

std::string const &Warlock::getName() const
{
    return this->name;
}

std::string const &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &newtitle)
{
    this->title = newtitle;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

// ОБЯЗАТЕЛЬНО ВЫУЧИТЬ
void Warlock::learnSpell(ASpell *p)
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

// ОБЯЗАТЕЛЬНО ВЫУЧИТЬ
void Warlock::forgetSpell(std::string const &sname)
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

// ОБЯЗАТЕЛЬНО ВЫУЧИТЬ
void Warlock::launchSpell(std::string const &sname, ATarget const &ref)
{
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        if ((*it)->getName() == sname)
            (*it)->launch(ref);
    }
}
