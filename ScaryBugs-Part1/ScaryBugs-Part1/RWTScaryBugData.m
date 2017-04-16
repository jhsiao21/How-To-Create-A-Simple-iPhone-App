//
//  RWTScaryBugData.m
//  ScaryBugs-Part1
//
//  Created by Logan on 2017/4/6.
//  Copyright © 2017年 com.Logan. All rights reserved.
//

#import "RWTScaryBugData.h"

@implementation RWTScaryBugData
@synthesize title = _title;
@synthesize rating = _rating;

-(id)initWithTitle:(NSString *)title rating:(float)rating{
    if (self = [super init]) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
