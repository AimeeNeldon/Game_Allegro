#include "allegro.h"
#include "Sprite.h"
#include "ExplodingSprite.h"


ExplodingSprite::ExplodingSprite(void)
{
}

void ExplodingSprite::Explode()
{
	allegro_message("object exploed!!!");
}

void	ExplodingSprite::Move()
{
	x += speed;
	if(x == 640)
		Explode();
}

