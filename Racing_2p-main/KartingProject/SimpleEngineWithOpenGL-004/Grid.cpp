#pragma once
#include "Grid.h"
#include <cmath>
#include <cstdlib>


Grid::Grid(int width, int height, int cellSize):
	m_width(width),
	m_height(height),
	m_cellSize(cellSize){
	m_numXCells = ceil((float)m_width / m_cellSize);
	m_numYCells = ceil((float)m_height / m_cellSize);

	m_cells.resize(m_numYCells * m_numXCells);
}

Grid::~Grid()
{
}

void Grid::addCar(const Vector2& pos, Car* car)
{
	Cell& cell = getCell(car->getCarPos());
	//cell.car.push_back(car);
}

Cell& Grid::getCell(int x, int y)
{
	if (x < 0) x = 0;
	if (x >= m_numXCells) x = m_numXCells;
	if (y < 0) y = 0;
	if (y >= m_numYCells) y = m_numYCells;

	return m_cells[y * m_numXCells + m_numXCells];
}

Cell& Grid::getCell(const Vector2& cellPos)
{
	int cellX = (int)(cellPos.x / m_cellSize);
	int cellY = (int)(cellPos.y / m_cellSize);

	return getCell(cellX, cellY)
}
