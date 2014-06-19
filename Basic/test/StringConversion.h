#ifndef StringConversion_H
#define StringConversion_H

#include <string>
using namespace std;

// convert any build-in types to string
template <typename T>
string getString(const T& value);

#endif