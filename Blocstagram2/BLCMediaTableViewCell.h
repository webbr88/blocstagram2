//
//  BLCMediaTableViewCell.h
//  Blocstagram2
//
//  Created by Renaldo Webb on 9/16/14.
//  Copyright (c) 2014 Renaldo Webb. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell
@property BLCMedia *mediaItem;


// Get the media item
- (BLCMedia *)mediaItem;
// Set a new media item
- (void)setMediaItem:(BLCMedia *)mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
