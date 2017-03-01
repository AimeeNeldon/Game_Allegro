#include "allegro.h"
#include "Sprite.h"

void	Sprite::Move()
{
	x += speed;
}

Sprite::Sprite() //default constructor
{
	x = 0;
	y = 0;
	speed = 0;
	visible = true;
}

void Sprite::Init(int x1, int y1, char name[], int bg, bool v, int s)
{
	visible = v;
	speed = s;
	x = x1;
	y = y1;
	bgc = bg; 
	bmp = load_bitmap(name,NULL);
}

void Sprite::Draw(BITMAP* buffer)
{
	if(visible == true)
	{
		//go through all pixels
		for(int i=0; i < bmp->w; i++)
			for(int j=0; j < bmp->h; j++)
			{
				//read pixel value
				int c = getpixel(bmp,i,j);
				//draw pixel if not white
				if(c != bgc)
					putpixel(buffer,i+x,j+y,c); //change from object coordinates to buffer coordinates
			}
	}
}

