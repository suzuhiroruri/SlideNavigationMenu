//
//  SAMenuCell.h
//  NavigationMenu
//
//  Created by Hiromasa Suzuki on 8/20/13.
//  Copyright (c) 2013 Hiromasa Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SIMenuCell : UITableViewCell
- (void)setSelected:(BOOL)selected withCompletionBlock:(void (^)())completion;
@end
