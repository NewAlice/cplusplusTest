#include "SpreadsheetCell.h"

#include <iostream>
#include <sstream>
using namespace std;

void SpreadsheetCell::setValue(double mValue)
{
  this->mValue = mValue;
  mString = doubleToString(this->mValue);
  printCell(this);
}
void printCell(SpreadsheetCell* inCellp)
{
    cout << inCellp->getString() << endl;
}
