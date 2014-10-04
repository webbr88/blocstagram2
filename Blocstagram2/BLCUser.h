//
//  BLCUser.h
//  Blocstagram2
//
//  Created by Renaldo Webb on 9/11/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCUser : NSObject
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic,strong) NSString *userName;
@property (nonatomic,strong) NSString * fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic,strong) UIImage *profilePicture;

- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@end
