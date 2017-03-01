#include "allegro.h"
#include "Sprite.h"
#include "FadingSprite.h"


FadingSprite::FadingSprite()
{
	tr = 100;
}

void FadingSprite::Draw(BITMAP* buffer)
{
	tr --;
	if(tr < 0)
		tr = 0;

	if(visible == true)
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
				int r = (tr*getr(c)+(100-tr)*getr(c2))/100;		
				int g = (tr*getg(c)+(100-tr)*getg(c2))/100;
				int b = (tr*getb(c)+(100-tr)*getb(c2))/100;
				int newc = makecol(r,g,b);
				//draw pixel if not white
				if(c != bgc)
					putpixel(buffer,i+x,j+y,newc); //change from object coordinates to buffer coordinates
			}
	}
}
