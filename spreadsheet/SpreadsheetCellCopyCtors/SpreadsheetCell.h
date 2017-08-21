#include <iostream>


using namespace std;

Class SpreadsheetCell
{
public:
    SpreadsheetCell();
    SpreadsheetCell(double initialValue);
    SpreadsheetCell(const string& initialValue);
    SpreadsheetCell(const SpreadsheetCell& src);
    void setValue(double inValue);
    double getValue() const;
    void setString(const string& instring);
    string getString() const;
protected:
    string doubleToString(double inValue) const;
    double stringToDouble(const string& inString) const;
    double mValue;
    string mString;
}
