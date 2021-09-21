#include "../Cell.hpp"
#include <math.h>
#include <iostream>

Cell::Cell()
{
  this->values = (int*)malloc(1);
  this->sideLength = 1;
}
Cell::Cell(int size)
{
  this->values = (int*)malloc(size*size);
  this->sideLength = size;
}

std::vector<int> Cell::getNeededCell()
{
  return this->neededValues;
}

int Cell::getSideLength()
{
  return this->sideLength;
}
int Cell::getValue(int x, int y)
{
  return *(this->values + (x + (y*sideLength)));
}
void Cell::setValue(int val, int x, int y)
{
  *(this->values + (x + (y*sideLength))) = val;
}

void Cell::fillNeededCell()
{
  bool skip;
  for(int i = 1; i <= 9; i++)
  {
    skip = false;
    for(int x = 0; x < this->sideLength && !skip; x++)
    {
      for(int y = 0; y < this->sideLength && !skip; y++)
      {
        if(this->getValue(x, y) == i)
        {
          skip = true;
        }
      }
    }
    if(!skip)
    {
      this->neededValues.push_back(i);
    }
  }
}
