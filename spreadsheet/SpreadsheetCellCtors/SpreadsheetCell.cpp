#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

Class SpreadsheetCell
{
public:
    SpreadsheetCell(double initialValue);// NO default constructor
    //Remainder of the class definition omitted for brevity
}
SpreadsheetCell::SpreadsheetCell(double initialValue)
{
    setValue(initialValue);
}
SpreadsheetCell::SpreadsheetCell(string initialValue)
{
    setString(initialValue);
}
