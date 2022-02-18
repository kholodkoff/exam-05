#include "Warlock.hpp"

int main(void) {
	Warlock richard("Richard", "Master of the Universe");

	richard.introduce();
	richard.setTitle("kekw");
	std::cout << richard.getName() << ", " << richard.getTitle() << '\n';

	return (0);
}
