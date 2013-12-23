//
//  ViewControllerForDuplicateEndCaps.h
//  InfiniteScrollView
//
//  Created by Jacob Haskins on 10/31/10.
//  Copyright 2010 Accella. All rights reserved.
//  Accella.net
//
//  More tips and tricks: iOSDeveloperTips.com
//

#import <UIKit/UIKit.h>


@interface ViewControllerForDuplicateEndCaps : UIViewController <UIScrollViewDelegate> {
	IBOutlet UIScrollView *scrollView;
}

@property (nonatomic, retain) UIScrollView *scrollView;

- (void)addImageWithName:(NSString*)imageString atPosition:(int)position;

@end
