#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

SpreadsheetCell::SpreadsheetCell()
{
    mValue = 0;
    mString = "";
}
SpreadsheetCell(const SpreadsheetCell& src) : mValue(src.mValue),mString(src.mString)
{
}
voild SpreadsheetCell::setString(const string& inString)
{
    mString = inString;
    mValue = stringToDouble(mString);
}
