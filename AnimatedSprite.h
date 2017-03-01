class AnimatedSprite : public Sprite
{
public:
	AnimatedSprite(void);
	//variables needed for animation
	BITMAP* frames[40]; //an array to hold all the frames as bitmap
	int		fnumber; //current frame number
	int		asize; //number of frames or animation size
	//advance animation function
	void NextFrame();
};

