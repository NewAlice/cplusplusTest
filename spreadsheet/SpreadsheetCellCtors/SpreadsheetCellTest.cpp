#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

void main()
{
  //object construct
  SpreadsheetCell myCell(5), anotherCell(4);
  cout<<"cell 1: "<<myCell.getValue() << endl;
  cout<<"cell 2: "<<anotherCell.getValue() <<endl;
  // heap object is constructed
  SpreadsheetCell *myCellp = new SpreadsheetCell(5);
  SpreadsheetCell *anotherCellp = nullptr;
  anotherCellp = new SpreadsheetCell(4);
  //...do something with the cells
  delete myCellp;
  myCellp = nullptr;
  delete anotherCellp;
  anotherCellp = nullptr;
  // two different constructor functions
  SpreadsheetCell aThirdCell("test");//Uses string-arg ctor
  SpreadsheetCell aFourthCell(4.4);//Uses double-arg ctor
  SpreadsheetCell* aThirdCellp = new SpreadsheetCell("4.4");//Uses string-arg ctor
  cout << "aThirdCell: "<< aThirdCell.getValue()<<endl;
  cout << "aFourthCell:" << aFourthCell.getValue()<<endl;
  cout << "aThirdCellp: "<<aThirdCellp->getValue()<<endl;
  delete aThirdCellp;
  aThirdCellp = nullptr;
}

