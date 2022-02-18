#ifndef POLYMORH_HPP
# define POLYMORH_HPP

# include "ASpell.hpp"

class Polymorph: public ASpell 
{
	public:
		Polymorph();
		virtual ~Polymorph();

		virtual ASpell	*clone(void) const;
};

#endif
