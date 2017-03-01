#include "allegro.h"
#include "Sprite.h"
#include "AnimatedSprite.h"


AnimatedSprite::AnimatedSprite(void)
{
	fnumber = 1;
	asize = 5;
}

void AnimatedSprite::NextFrame()
{
		fnumber ++;
		if(fnumber == asize)
			fnumber = 0;
		bmp = frames[fnumber];
}