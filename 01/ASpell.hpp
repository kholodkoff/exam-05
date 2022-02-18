#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell 
{
	protected:
		std::string	name;
		std::string	effects;

	public:
		ASpell();
		ASpell(ASpell const &other);
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();
		ASpell	&operator=(ASpell const &other);

		std::string const	&getName(void) const;
		std::string const	&getEffects(void) const;
		void				launch(ATarget const &target);
		virtual ASpell		*clone(void) const = 0;
};

#endif
