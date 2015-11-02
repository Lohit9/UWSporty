//
//  ModelController.h
//  UWSporty
//
//  Created by Lohit Talasila on 2015-10-31.
//  Copyright © 2015 Lohit Talasila. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

