#include "../Board.hpp"
#include <iostream>


Board::Board()
{
  for(int i = 0; i < BOARDLENGTH; i++)
  {
    for(int c = 0; c < BOARDLENGTH; c++)
    {
      allCells[i][c] = *(new Cell(BOARDLENGTH));
    }
  }

  for(int by = 0; by < BOARDLENGTH; by++)
  {
    for(int cy = 0; cy < this->getCell(0, 0)->getSideLength(); cy++)
    {
      for(int bx = 0; bx < BOARDLENGTH; bx++)
      {
        for(int cx = 0; cx < this->getCell(0, 0)->getSideLength(); cx++)
        {
          this->getCell(bx, by)->setValue(0, cx, cy);
        }
      }
    }
  }
} // O(n^4)

Cell* Board::getCell(int x, int y)
{
  return &allCells[x][y];
} // O(1)

void Board::print()
{
  std::cout << std::endl;
  for(int by = 0; by < BOARDLENGTH; by++)
  {
    for(int cy = 0; cy < this->getCell(0, 0)->getSideLength(); cy++)
    {
      for(int bx = 0; bx < BOARDLENGTH; bx++)
      {
        for(int cx = 0; cx < this->getCell(0, 0)->getSideLength(); cx++)
        {
          if(this->getCell(bx, by)->getValue(cx, cy) == 0)
          {
            std::cout << "[" << "-" << "]";
          } else
          {
            std::cout << "[" << this->getCell(bx, by)->getValue(cx, cy) << "]";
          }
        }
        std::cout << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
} // O(n^4)
