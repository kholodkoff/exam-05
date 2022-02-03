#ifndef WALOCK_HPP
#define WALOCK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <vector>

class Warlock 
{
    private:
        std::string name;
        std::string title;
        std::vector<ASpell*> arr;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(const std::string &newtitle);
        void introduce() const;

        void learnSpell(ASpell *p);
        void forgetSpell(std::string const &sname);
        void launchSpell(std::string const &sname, ATarget const &ref);
};

#endif
