#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

void main()
{
  //use default constructor to create object
  SpreadsheetCell myCell;
  myCell.setValue(6);
  cout << "cell 1"<< myCell.getValue()<<endl;

  SpreadsheetCell myCell();//wrong but will compile function declare and will return a object
  myCell.setValue(6); //however this line will not compile
  cout << "cell 1"<< myCell.getValue()<<endl;
  SpreadsheetCell* myCellp = new SpreadsheetCell(;// Note the funcion-call syntax
}

