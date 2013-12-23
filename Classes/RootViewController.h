//
//  RootViewController.h
//  InfiniteScrollView
//
//  Created by Jacob Haskins on 10/27/10.
//  Copyright Accella 2010. All rights reserved.
//  Accella.net
//
//  More tips and tricks: iOSDeveloperTips.com
//

#import <UIKit/UIKit.h>

@class ViewControllerForDuplicateEndCaps;
@class ViewControllerForThreePagesOnly;

@interface RootViewController : UIViewController {
	ViewControllerForDuplicateEndCaps *viewControllerForDuplicateEndCaps;
	ViewControllerForThreePagesOnly *viewControllerForThreePagesOnly;
}

@property (nonatomic, retain) ViewControllerForDuplicateEndCaps *viewControllerForDuplicateEndCaps;
@property (nonatomic, retain) ViewControllerForThreePagesOnly *viewControllerForThreePagesOnly;

- (IBAction)loadScrollViewWithDuplicateEndCaps:(id)sender;
- (IBAction)loadScrollViewWithThreePagesOnly:(id)sender;

@end
