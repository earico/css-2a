#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
	public:
		static int num_enemies;
		Enemy();
		Enemy(int level, int health);

		//Getters
		int getLevel()const{return level;}
		int getHealth()const{return health;}

		//Setters
		void setLevel(int level){this->level = level;}
		void setHealth(int health){this->health = health;}
		void print() const;

	private:
		int level, health;
};

#endif // ENEMY_H
