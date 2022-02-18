#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget 
{
	protected:
		std::string	type;

	public:
		ATarget();
		ATarget(ATarget const &other);
		ATarget(std::string const &type);
		virtual ~ATarget();
		ATarget	&operator=(ATarget const &other);

		std::string const	&getType(void) const;
		void				getHitBySpell(ASpell const &spell) const;
		virtual ATarget		*clone(void) const = 0;
};

#endif
