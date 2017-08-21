#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

void main()
{
  shared_ptr<SpreadsheetCell> myCellp(new SpreadsheetCell());
  myCellp->setValue(3.7);
  cout<<"cell 1: "<<myCellp->getValue()<< " "<<myCellp->getString()<< endl;
}
