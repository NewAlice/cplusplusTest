#include "SpreadsheetCell.h"
#include <iostream>
using namespace std;

class Spreadsheet
{
public:
    Spreadsheet(int inWidth, int inHeight);
    Spreadsheet(const Spreadsheet& src);
    ~Spreadsheet();
    void setCellAt(int x, int y, const SpreadsheetCell& cell);
    SpreadsheetCell getCellAt(int x, int y);
protected:
    bool inRange(int val, int upper);
    int mWidth, mHeight;
    SpreadsheetCell** mCells;
};
