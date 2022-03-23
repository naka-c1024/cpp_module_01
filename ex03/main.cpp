#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club); // clubのtypeを後で変えるから参照を使う
		bob.attack();
		club.setType("some other type of club"); // ここでtypeを変えた場合にbobのtypeも変わらなくちゃいけない
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim"); // Aと違い参照のclubを初期化できない->ポインタを使う
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
