//
//  BLCMedia.h
//  Blocstagram2
//
//  Created by Renaldo Webb on 9/11/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCMedia : NSObject

@property (nonatomic,strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic,strong) NSString *caption;
@property (nonatomic,strong) NSArray *comments;

@end
