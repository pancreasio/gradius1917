#ifndef FLOWMANAGER_H
#define FLOWMANAGER_H
#include "raylib.h"
#include "Gameplay.h"
#include "Menu.h"
#include "Credits.h"
#include "GameOver.h"
#include <iostream>
namespace flowspace {
	enum gamestate{
		menustate, gameplaystate, gameoverstate, creditsstate
	};
	extern bool gameSwitch;
	extern gamestate currentstate;
	extern Vector2 mousePosition;
	extern unsigned int screenwidth;
	extern unsigned int screenheight;
	void initGame();
	void gameLoop();
	void generalDraw();
	void exitGame();
}
#endif