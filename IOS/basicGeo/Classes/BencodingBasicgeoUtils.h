/**
 * benCoding.basicGeo Project
 * Copyright (c) 2009-2012 by Ben Bahrenburg. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@interface utils : NSObject
-(BOOL) allowBackgrounding;
-(BOOL) significantLocationChangeMonitoringAvailable;
@end