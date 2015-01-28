/*
 *  daily3_c.h
 *  daily3.c
 *
 *  Created by Curtis Teitleman on 1/27/15.
 *  Copyright (c) 2015 Curtis Teitleman. All rights reserved.
 *
 */

extern "C" {
#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(default)

/* External interface to the daily3_c, C-based */

CFStringRef daily3_cUUID(void);

#pragma GCC visibility pop
}
