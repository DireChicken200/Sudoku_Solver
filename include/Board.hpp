#include "Cell.hpp"
#define BOARDLENGTH 3

class Board
{
  private :
    Cell allCells[BOARDLENGTH][BOARDLENGTH];
    std::vector<std::vector<int>> neededValuesCol;
    std::vector<std::vector<int>> neededValuesRow;
  public :
    Board();
    Cell* getCell(int x, int y);
    std::vector<int> getNeededRow(int r);
    std::vector<int> getNeededColumn(int c);
    void fillNeededRow(int r);
    void fillNeededColumn(int c);
    void print();
};
