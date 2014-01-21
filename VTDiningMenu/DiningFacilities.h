//
//  DiningFacilities.h
//  VTDiningMenu
//
//  Represents a dining facility at Virginia Tech
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DiningFacilities : NSObject {
    NSString *_facilityName;
    NSNumber *_timesStamp; //time-stamp needed to send the request
    NSString *_specials; //anything special happening during the current day
    NSNumber *_locationNumber;

}

@property (nonatomic) NSString *facilityName;
@property (nonatomic) NSString *timeStamp;
@property (nonatomic) NSNumber *locationNumber;
@property (nonatomic) NSString *specials; 

- (id) init;
- (id) initWithName: (NSString *)facilityName
          timeStamp: (NSNumber *)timeStamp
           specials: (NSString *) specials
     locationNumber: (NSNumber *) locationNumber;

//needs more to-do stubs here to expand behavior

@end


