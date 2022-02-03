#include "Fwoosh.hpp"

// ВЫУЧИТЬ
Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{
}

// ВЫУЧИТЬ
ASpell *Fwoosh::clone() const
{
    return (new Fwoosh(*this));
}
