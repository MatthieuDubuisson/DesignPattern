#pragma once
#include "GameObjects.h"
#include <iostream>
#include "Vector2.h"
#include "Grid.h"

class Car : public GameObjects
{
private:
	float maxPowerSpeed;
	float powerSpeed;
	float rotationSpeed;
	float rotation;
	float pi;
	float twoPi;
	float nbLaps;
	bool isOnRoad;
	Vector2 carPos;

	void collisionDetection();
	void lapsDetection();

public:
	Car(const char *texturepath, SDL_Renderer *ren, int x, int y);
	~Car();
	virtual void update() override;
	void move(std::string direction);

	Vector2 getCarPos();
	Vector2 getForward() const;
	int getMaxSpeed();
	int getSpeed();
	int getRotationSpeed();
	float getRotation();
	int getPi();
	int getTwoPi();
	int getNbLaps();
	
};