#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

void main()
{
  SpreadsheetCell *myCell = new SpreadsheetCell();
  myCell->setValue(3.7);
  cout<<"cell 1: "<<myCell->getValue()<< " "<<myCell->getString()<< endl;
  delete myCell;
  myCell=nullptr;
}
