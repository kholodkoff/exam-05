#ifndef WALOCK_HPP
#define WALOCK_HPP

#include <string>
#include <iostream>

class Warlock 
{
    private:
        std::string name;
        std::string title;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        // ВЫУЧИТЬ
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(const std::string &newtitle);
        void introduce() const;
};

#endif