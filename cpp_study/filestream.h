#pragma once
namespace dipper {
	class monster {
	private:
		std::string name;
		unsigned int id;
		int hp, mp, exp;
	public:
		monster();
		monster(int hp, int mp);
		void hit(monster monst1, monster monst2);
		void status(monster);
	};
}