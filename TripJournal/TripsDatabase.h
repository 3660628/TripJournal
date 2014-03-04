//
//  TripsDatabase.h
//  TripJournal
//
//  Created by Nathan Condell on 3/2/14.
//  Copyright (c) 2014 Nathan Condell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface TripsDatabase : NSObject {
    sqlite3 *_database;
}

@property (strong, nonatomic) NSDateFormatter *format;
@property (strong, nonatomic) NSString *databasePath;

+ (TripsDatabase*)database;
- (NSMutableArray *)tripsJournal;

@end
