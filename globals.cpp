#include "globals.h"

cLog* Log = new cLog();

string itos( int number )
{
   stringstream ss;
   ss << number;
   return ss.str();
}