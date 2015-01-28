/*
 *  daily3_c.cp
 *  daily3.c
 *
 *  Created by Curtis Teitleman on 1/27/15.
 *  Copyright (c) 2015 Curtis Teitleman. All rights reserved.
 *
 */

#include "daily3_c.h"
#include "daily3_cPriv.h"

CFStringRef daily3_cUUID(void)
{
	Cdaily3_c* theObj = new Cdaily3_c;
	return theObj->UUID();
}

CFStringRef Cdaily3_c::UUID()
{
	return CFSTR("0001020304050607");
}
