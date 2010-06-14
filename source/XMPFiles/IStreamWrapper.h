#include "Objidl.h"
#include "XMPFiles.hpp"

struct IStreamWrapper
{
	IStream * iStream = -1;
	LFA_FileRef ref = -1;
}