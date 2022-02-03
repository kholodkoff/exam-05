#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    for (std::vector<ATarget *>::iterator it = arr.begin(); it != arr.end(); it++)
        delete *it;
    arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *p)
{
    if (p)
    {
        for (std::vector<ATarget *>::iterator it = arr.begin(); it != arr.end(); it++)
        {
            if ((*it)->getType() == p->getType())
                return;
        }
        arr.push_back(p->clone());
    }
}

void TargetGenerator::forgetTargetType(std::string const &sname)
{
    for (std::vector<ATarget *>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        if ((*it)->getType() == sname)
        {
            delete *it;
            arr.erase(it);
            return;
        }
    }
}

ATarget *TargetGenerator::createTarget(std::string const &sname)
{
    for (std::vector<ATarget *>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        if ((*it)->getType() == sname)
            return (*it);
    }
    return NULL;
}
