//
//  BLCComment.m
//  Blocstagram2
//
//  Created by Renaldo Webb on 9/11/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import "BLCComment.h"
#import "BLCUser.h"

@implementation BLCComment

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = commentDictionary[@"id"];
        self.text = commentDictionary[@"text"];
        self.from = [[BLCUser alloc] initWithDictionary:commentDictionary[@"from"]];
    }
    
    return self;
}

@end
