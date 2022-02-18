#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main(void) {
	Warlock richard("Richard", "Master of the Universe");

	richard.introduce();
	richard.setTitle("kekw");
	std::cout << richard.getName() << ", " << richard.getTitle() << '\n';

	std::cout << "------01-----\n";
	Dummy *ta1 = new Dummy();
	Fwoosh *sp1 = new Fwoosh();

	richard.launchSpell("Fwoosh", *ta1);
	richard.learnSpell(sp1);
	richard.launchSpell("Fwoosh", *ta1);
	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", *ta1);

	delete ta1;
	delete sp1;

	return (0);
}
