class Sprite
{
public:
	//data members of the object
	//these variables can be accessed by all function of that class
	BITMAP* bmp;
	int		x;
	int		y;
	int		bgc;
	int		speed;
	bool	visible;

	//member functions
	Sprite(); 
	void Init(int x1, int y1, char name[], int bg, bool v, int s);
	void Draw(BITMAP* buffer);
	void	Move();
};
