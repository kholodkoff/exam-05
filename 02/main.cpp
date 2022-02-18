#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"

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

	std::cout << "\n------02-----\n";
	TargetGenerator *ta = new TargetGenerator();
	Fireball *sp2 = new Fireball();
	Polymorph *sp3 = new Polymorph();
	BrickWall *ta2 = new BrickWall();

	richard.learnSpell(sp1);
	richard.learnSpell(sp2);
	richard.learnSpell(sp3);

	ta->learnTargetType(ta1);
	ta->learnTargetType(ta2);
	richard.launchSpell("Fwoosh", *ta->createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *ta->createTarget("Dummy Practice"));
	richard.launchSpell("Polymorph", *ta->createTarget("Dummy Practice"));

	richard.launchSpell("Fwoosh", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Fireball", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *ta->createTarget("BrickWall Practice"));

	std::cout << "\n------forget-----\n";
	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Fireball", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *ta->createTarget("BrickWall Practice"));

	ta->forgetTargetType("BrickWall Practice");
	richard.launchSpell("Fwoosh", *ta->createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *ta->createTarget("Dummy Practice"));
	richard.launchSpell("Polymorph", *ta->createTarget("Dummy Practice"));

	richard.launchSpell("Fwoosh", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Fireball", *ta->createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *ta->createTarget("BrickWall Practice"));

	std::cout << "\n------non-----\n";
	richard.launchSpell("KEK", *ta->createTarget("Dummy Practice"));

	delete ta;
	delete ta1;
	delete ta2;
	delete sp1;
	delete sp2;
	delete sp3;

	return (0);
}
