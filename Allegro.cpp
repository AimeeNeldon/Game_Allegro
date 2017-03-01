// create a new class based on existing one
//  add variables
//  add functions
//  change existing functions


#include <allegro.h>
#include "Sprite.h"
#include "AnimatedSprite.h"
#include "ExplodingSprite.h"
#include "EnemySprite.h"
#include "FlashingSprite.h"
#include "FadingSprite.h"
#include "Game.h"

//main function is still needed
//but it only creates the game object
void main() 
{
	//create game objet
	//this will create all the member variables and then will call constructor that initializes the object
	//see game.h for details
	Game g;
	//run th game logic (main loop in game)
	g.Run();
}
END_OF_MAIN();







