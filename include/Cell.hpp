#include <vector>

class Cell
{
  private :
    int* values;
    int sideLength;
    std::vector<int> neededValues;
  public :
    Cell();
    Cell(int size);
    int getSideLength();
    int getValue(int x, int y);
    std::vector<int> getNeededCell();
    void setValue(int val, int x, int y);
    void fillNeededCell();
};
