#include "allegro.h"
#include "Sprite.h"
#include "AnimatedSprite.h"
#include "ExplodingSprite.h"
#include "EnemySprite.h"
#include "FlashingSprite.h"
#include "FadingSprite.h"
#include "Game.h"


Game::Game()
{
	//Allegro initialization
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	
	//create a buffer same size as screen
	//all drawing is done on buffer, then buffer is put on screen
	buffer = create_bitmap(640,480);
	map = load_bitmap("map.bmp",NULL);

	//initialize objects
	s1.Init(0,0,"obj.bmp",makecol(255,255,255),true,0);
	s2.Init(100,100,"o2.bmp",makecol(255,255,255),true,0);
	s3.Init(200,200,"o3.bmp",makecol(255,255,255),true,1);

	e.Init(300,300,"obj.bmp",makecol(255,255,255),true,0);
	f.Init(350,300,"obj.bmp",makecol(255,255,255),true,0);
	f2.Init(400,300,"obj.bmp",makecol(255,255,255),true,0);

	fire.Init(100,120,"fire1.bmp",makecol(0,128,0),true,0);	
	fire.asize = 4;
	fire.frames[0] = load_bitmap("fire1.bmp",NULL);
	fire.frames[1] = load_bitmap("fire2.bmp",NULL);
	fire.frames[2] = load_bitmap("fire3.bmp",NULL);
	fire.frames[3] = load_bitmap("fire4.bmp",NULL);
	
	prince.Init(150,120,"0.bmp",makecol(0,128,0),true,0);
	prince.asize = 3;
	prince.frames[0] = load_bitmap("1.bmp",NULL);
	prince.frames[1] = load_bitmap("2.bmp",NULL);
	prince.frames[2] = load_bitmap("3.bmp",NULL);
}

void Game::Run()
{
	Sprite x;

	//process 
	while(key[KEY_ESC]==0)
	{
		//move program-controlled objects and advance animations
		s3.Move();
		e.Move();
		fire.NextFrame();
		prince.NextFrame();

		//respond to keys
		if(key[KEY_RIGHT]!=0)
		{
			if(s1.x < 70-s1.bmp->w)
				s1.x++;
		}
		if(key[KEY_DOWN]!=0)
		{
			if(s1.y < 150-s1.bmp->h)
				s1.y++;
		}

		//draw
		//clear_bitmap(buffer);
		blit(map,buffer,0,0,0,0,640,480);
		s1.Draw(buffer);
		s2.Draw(buffer);
		s3.Draw(buffer);
		fire.Draw(buffer);
		prince.Draw(buffer);
		e.Draw(buffer);
		f.Draw(buffer);
		f2.Draw(buffer);
		blit(buffer,screen,0,0,0,0,640,480);
	}
}


