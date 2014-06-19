
#include <sstream>
#include "StringConversion.h"

// convert any build-in types to string
template <typename T>
string getString(const T& value){
	stringstream s;
	s << value;
	return s.str();
}
