#include "ATarget.hpp"

ATarget::ATarget(std::string const &attribute) : attribute(attribute)
{
    // std::cout << this->name << ": This looks like another boring day." << std::endl;
}

ATarget::~ATarget()
{
    // std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &ATarget::getType() const
{
    return this->attribute;
}

// ВЫУЧИТЬ
void ATarget::getHitBySpell(ASpell const &ref) const
{
    std::cout << this->attribute << " has been " << ref.getEffects() << "!" << std::endl;
}
