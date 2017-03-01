class Game
{
public:
	BITMAP* buffer;
	BITMAP* map;
	Sprite s1;
	Sprite s2;
	ExplodingSprite s3;
	AnimatedSprite fire;
	AnimatedSprite prince;
	EnemySprite e;
	FlashingSprite f;
	FadingSprite f2;

	Game();
	void Run();
};

//sequence of constructir calls:
//
//Sprite for s1
//Sprite for s2
//Sprite for s3
//ExplodingSprite for s3
//Sprite for fire
//AnimatedSprite for fire
//Game for g



