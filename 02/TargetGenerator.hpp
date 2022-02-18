#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>
# include "ATarget.hpp"

class TargetGenerator 
{
	private:
		std::vector<ATarget*>	targets;

		TargetGenerator(TargetGenerator const &other);
		TargetGenerator	&operator=(TargetGenerator const &other);

	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void				learnTargetType(ATarget *target);
		void				forgetTargetType(std::string const &targetType);
		ATarget				*createTarget(std::string const &targetType);
};

#endif
