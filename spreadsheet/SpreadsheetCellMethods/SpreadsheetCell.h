Class SpreadsheetCell
{
protected:
    double mValue;
    string mString;
    mutable int mNumAccesses = 0;
}
double SpreadsheetCel::getValue() const
{
    mNumAccesses++;
    return mValue;
}
string SpreadsheetCell::getString() const
{
    mNumAccesses++;
    return mString;
}
