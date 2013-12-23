//
//  InfiniteScrollViewAppDelegate.h
//  InfiniteScrollView
//
//  Created by Jacob Haskins on 10/27/10.
//  Copyright Accella 2010. All rights reserved.
//  Accella.net
//
//  More tips and tricks: iOSDeveloperTips.com
//

#import <UIKit/UIKit.h>

@interface InfiniteScrollViewAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

