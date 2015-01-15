//
//  HKVideoPlayerViewControllerDelegate.h
//  iOS Video Player
//
//  Created by Hai Kieu on 11/22/14.
//  Copyright (c) 2014 haikieu2907@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HKVideoPlayerViewController;

@protocol HKVideoPlayerViewControllerDelegate <NSObject>

@required
-(void) videoPlayer:(HKVideoPlayerViewController*)videoPlayer didCloseView:(UIView*)view;

@end
