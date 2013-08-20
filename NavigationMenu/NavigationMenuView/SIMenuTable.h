//
//  SAMenuTable.h
//  NavigationMenu
//
//  Created by Hiromasa Suzuki on 8/20/13.
//  Copyright (c) 2013 Hiromasa Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SIMenuDelegate <NSObject>
- (void)didBackgroundTap;
- (void)didSelectItemAtIndex:(NSUInteger)index;
@end

@interface SIMenuTable : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) id <SIMenuDelegate> menuDelegate;

- (id)initWithFrame:(CGRect)frame items:(NSArray *)items;
- (void)show;
- (void)hide;

@end
