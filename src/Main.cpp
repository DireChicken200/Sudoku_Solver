#include <iostream>
#include "../include/Board.hpp"

using namespace std;
int main()
{
  Board b;

  b.getCell(0, 1)->setValue(5, 1, 1);

//b.print();
b.getCell(0, 1)->fillNeededCell();
for(int val : b.getCell(0, 1)->getNeededCell())
{
  cout << val << endl;
}
  return 0;
}
