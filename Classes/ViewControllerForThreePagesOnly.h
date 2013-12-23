//
//  ViewControllerForThreePagesOnly.h
//  InfiniteScrollView
//
//  Created by Jacob Haskins on 10/31/10.
//  Copyright 2010 Accella. All rights reserved.
//  Accella.net
//
//  More tips and tricks: iOSDeveloperTips.com
//

#import <UIKit/UIKit.h>


@interface ViewControllerForThreePagesOnly : UIViewController <UIScrollViewDelegate> {
	IBOutlet UIScrollView *scrollView;
	
	NSMutableArray *documentTitles;
	UILabel *pageOneDoc;
	UILabel *pageTwoDoc;
	UILabel *pageThreeDoc;
	int prevIndex;
	int currIndex;
	int nextIndex;
}

@property (nonatomic, retain) UIScrollView *scrollView;

@property (nonatomic, retain) NSMutableArray *documentTitles;
@property (nonatomic, retain) UILabel *pageOneDoc;
@property (nonatomic, retain) UILabel *pageTwoDoc;
@property (nonatomic, retain) UILabel *pageThreeDoc;
@property (nonatomic) int prevIndex;
@property (nonatomic) int currIndex;
@property (nonatomic) int nextIndex;

- (void)loadPageWithId:(int)index onPage:(int)page;

@end
