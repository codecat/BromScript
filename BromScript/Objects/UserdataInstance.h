#ifndef BROMSCRIPT_USERDATAINSTANCE_INCLUDED
#define BROMSCRIPT_USERDATAINSTANCE_INCLUDED

#include "../SIF.h"
#include "../Objects/Userdata.h"

namespace BromScript{
	class UserdataInstance {
	public:
		void* Ptr;
		Userdata* TypeData;
		bool CallDTor;


		UserdataInstance(void);
		~UserdataInstance(void);
	};
}

#endif