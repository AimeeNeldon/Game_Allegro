#include "allegro.h"
#include "sprite.h"
#include "EnemySprite.h"

EnemySprite::EnemySprite()
{
}

void EnemySprite::Move()
{
	speed = rand()%15 - 7;
	x += speed;
}
