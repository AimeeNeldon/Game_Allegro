#include "allegro.h"
#include "sprite.h"
#include "FlashingSprite.h"


FlashingSprite::FlashingSprite(void)
{
}


FlashingSprite::~FlashingSprite(void)
{
}

void FlashingSprite::Draw(BITMAP* buffer)
{
	/*if(visible == true)
		visible = false;
	if(visible == false)
		visible = true;*/
	visible = !visible;

	Sprite::Draw(buffer);

	/*if(visible == true)
	{
		//go through all pixels
		for(int i=0; i < bmp->w; i++)
			for(int j=0; j < bmp->h; j++)
			{
				//read pixel value
				int c = getpixel(bmp,i,j);
				//read the background
				int c2 = getpixel(buffer,i+x,j+y);
				//calculate average
				int r = (getr(c)+getr(c2))/2;
				int g = (getg(c)+getg(c2))/2;
				int b = (getb(c)+getb(c2))/2;
				int newc = makecol(r,g,b);
				//draw pixel if not white
				if(c != bgc)
					putpixel(buffer,i+x,j+y,newc); //change from object coordinates to buffer coordinates
			}
	}*/
}