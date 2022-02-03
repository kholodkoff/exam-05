#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

// ВЫУЧИТЬ
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
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

// ВЫУЧИТЬ
void Warlock::learnSpell(ASpell *p)
{
    if (p)
        sb.learnSpell(p);
}

// ВЫУЧИТЬ
void Warlock::forgetSpell(std::string const &sname)
{
    sb.forgetSpell(sname);
}

// ОБЯЗАТЕЛЬНО ВЫУЧИТЬ !!!!!!
void Warlock::launchSpell(std::string const &sname, ATarget const &ref)
{
    ASpell *spell = sb.launchSpell(sname);
    const ATarget *target = &ref;

    if (spell && target)
        spell->launch(ref);
}
