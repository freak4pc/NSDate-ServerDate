//
//  NSDate+ServerDate.h
//
//  Created by Shai Mishali on 10/2/13.
//  Copyright (c) 2013 Shai Mishali. All rights reserved.
//

#import <Foundation/Foundation.h>

#define _SD_SERVER @"http://google.com/"
#define _SD_FORMAT @"EEE, dd MMM yyyy HH:mm:ss z"

/**
 NSDate+ServerDate is a NSDate Category that allows you to make sure your time is synced up to a remote server regardless of the User's local settings.
 
 It does this by performing a one-time-per-session HTTP HEAD Request to the supplied server, getting a "Base" date, and keep counting from there - Making sure you're in sync with the remote server even when the user's clock isn't.
 
 ## Definitions
 Modify _SD_SERVER If you wish to sync your time wish a specific server (e.g. your API server).
 Modify _SD_FORMAT If for some reason the Date format your HTTP Server returns is different than the one specified.
 */
@interface NSDate (ServerDate)

/**
 Return the current server date.
 
 @return NSDate
 */
+(NSDate *) serverDate;

@end