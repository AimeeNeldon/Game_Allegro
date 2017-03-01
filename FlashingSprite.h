#pragma once

class FlashingSprite :
	public Sprite
{
public:
	FlashingSprite(void);
	~FlashingSprite(void);
	void Draw(BITMAP* buffer);
};

