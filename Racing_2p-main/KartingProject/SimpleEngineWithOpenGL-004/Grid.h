#pragma once
#include<vector>
#include"Vector2.h"
#include "Car.h"

struct Cell {

};

class Grid {
public:
	Grid(int width, int height, int cellSize);
	~Grid();

	void addCar(const Vector2& pos, Car* car);
	//Gets cell based on car coordinates
	Cell& getCell(int x, int y);
	//Gets cell based on window coordinates
	Cell& getCell(const Vector2& cellPos);

private:
	std::vector<Cell> m_cells;
	int m_cellSize;
	int m_width;
	int m_height;
	int m_numXCells;
	int m_numYCells;
};