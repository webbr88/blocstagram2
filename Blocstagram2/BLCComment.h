//
//  BLCComment.h
//  Blocstagram2
//
//  Created by Renaldo Webb on 9/11/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject

@property (nonatomic,strong) NSString *idNumber;
@property (nonatomic,strong) BLCUser *from;
@property (nonatomic,strong) NSString *text;

@end
