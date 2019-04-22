#include "Static.h"
#include <iostream>

int Enemy::num_enemies = 0;

Enemy::Enemy(){
	//ctor
	Enemy::num_enemies++;
	level = 1;
	health = 100;
}

Enemy::Enemy(int level, int health){
	Enemy::num_enemies++;
	this->level = level;
	this->health = health;
}

void Enemy::print()const{
	std::cout << "Enemy: H(" << health << ") / L(" << level << ")\n";
}
