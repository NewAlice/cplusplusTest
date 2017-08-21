#include <iostream>
#include "SpreadsheetCell.h"

using namespace std;

SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell &rhs)
{
    if(this == &rhs)
    {
        return *this;
    }

    mValue = rhs.mValue;
    mString = rhs.mString;
    return *this;
}

