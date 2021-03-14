#include <iostream>

typedef unsigned short int USHORT;
int main()
{

    using std::cout;
    using std::endl;

    USHORT Width = 5;
    USHORT Length;
    Length = 10;

    USHORT Area = (Width * Length);

    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl;
    return 0;
}/*
typedef is a keyword used in C language to assign alternative names to existing datatypes.
Its mostly used with user defined datatypes, 
when names of the datatypes become slightly complicated to use in programs.
Following is the general syntax for using typedef ,
typedef <existing_name> <alias_name>*/
