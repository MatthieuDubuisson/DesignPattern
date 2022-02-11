#pragma once
#include "SDL.h"
#include <SDL_image.h>
#include "Grid.h"
#include <memory>

class Game
{
public:

	Game();
	~Game();
	
	void init(const char* title, int posX, int posY, int width, int height);
	void update();
	void render();
	void clean();
	bool running();

	void processInput(); // ?

private:
	static Game* instance;
	bool isRunning;
	SDL_Rect dataRect;
	SDL_Texture* dataTexture;
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::unique_ptr<Grid> m_grid; // spatial partition grid for collision
};

