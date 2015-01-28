/*
 *  daily3_cPriv.h
 *  daily3.c
 *
 *  Created by Curtis Teitleman on 1/27/15.
 *  Copyright (c) 2015 Curtis Teitleman. All rights reserved.
 *
 */

#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(hidden)

class Cdaily3_c {
	public:
		CFStringRef UUID(void);
};

#pragma GCC visibility pop
