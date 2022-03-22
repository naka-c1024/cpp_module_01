#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	void announce( void );

	Zombie(std::string name); // 引数つきコンストラクタ,nameを登録
	~Zombie();
private:
	std::string	_name;
};

#endif // ZOMBIE_HPP
