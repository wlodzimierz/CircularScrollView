//
//  RootViewController.m
//  InfiniteScrollView
//
//  Created by Jacob Haskins on 10/27/10.
//  Copyright Accella 2010. All rights reserved.
//  Accella.net
//
//  More tips and tricks: iOSDeveloperTips.com
//

#import "RootViewController.h"
#import "ViewControllerForDuplicateEndCaps.h"
#import "ViewControllerForThreePagesOnly.h"
#import "InfiniteScrollViewAppDelegate.h"

@implementation RootViewController

@synthesize viewControllerForDuplicateEndCaps, viewControllerForThreePagesOnly;

- (IBAction)loadScrollViewWithDuplicateEndCaps:(id)sender {
	InfiniteScrollViewAppDelegate *delegate = (InfiniteScrollViewAppDelegate*)[[UIApplication sharedApplication] delegate];
	
	if(self.viewControllerForDuplicateEndCaps == nil) {
		ViewControllerForDuplicateEndCaps *temp = [[ViewControllerForDuplicateEndCaps alloc] initWithNibName:@"ViewControllerForDuplicateEndCaps" bundle:nil];
		self.viewControllerForDuplicateEndCaps = temp;
		[temp release];
	}
	
	UIBarButtonItem *backButton = [[UIBarButtonItem alloc] initWithTitle:@"Back" style:UIBarButtonItemStyleBordered target:nil action:nil];
	self.navigationItem.backBarButtonItem = backButton;
	[backButton release];
	
	[delegate.navigationController pushViewController:self.viewControllerForDuplicateEndCaps animated:YES];
}

- (IBAction)loadScrollViewWithThreePagesOnly:(id)sender {
	InfiniteScrollViewAppDelegate *delegate = (InfiniteScrollViewAppDelegate*)[[UIApplication sharedApplication] delegate];
	
	if(self.viewControllerForThreePagesOnly == nil) {
		ViewControllerForThreePagesOnly *temp = [[ViewControllerForThreePagesOnly alloc] initWithNibName:@"ViewControllerForThreePagesOnly" bundle:nil];
		self.viewControllerForThreePagesOnly = temp;
		[temp release];
	}
	
	UIBarButtonItem *backButton = [[UIBarButtonItem alloc] initWithTitle:@"Back" style:UIBarButtonItemStyleBordered target:nil action:nil];
	self.navigationItem.backBarButtonItem = backButton;
	[backButton release];
	
	[delegate.navigationController pushViewController:self.viewControllerForThreePagesOnly animated:YES];
}

#pragma mark -
#pragma mark Memory management

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Relinquish ownership any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
    // Relinquish ownership of anything that can be recreated in viewDidLoad or on demand.
    // For example: self.myOutlet = nil;
}


- (void)dealloc {
	[viewControllerForDuplicateEndCaps release];
	[viewControllerForThreePagesOnly release];
    [super dealloc];
}


@end

