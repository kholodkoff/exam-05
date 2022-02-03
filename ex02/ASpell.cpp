#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects)
{
    // std::cout << this->name << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{
    // std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &ASpell::getName() const
{
    return this->name;
}

std::string const &ASpell::getEffects() const
{
    return this->effects;
}

// ВЫУЧИТЬ
void ASpell::launch(ATarget const &ref)
{
    ref.getHitBySpell(*this);
}
