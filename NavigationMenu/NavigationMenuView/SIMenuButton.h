//
//  SAMenuButton.h
//  NavigationMenu
//
//  Created by Hiromasa Suzuki on 8/20/13.
//  Copyright (c) 2013 Hiromasa Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SIMenuButton : UIControl

@property (nonatomic, unsafe_unretained) BOOL isActive;
@property (nonatomic) CGGradientRef spotlightGradientRef;
@property (unsafe_unretained) CGFloat spotlightStartRadius;
@property (unsafe_unretained) float spotlightEndRadius;
@property (unsafe_unretained) CGPoint spotlightCenter;
@property (nonatomic, strong) UILabel *title;
@property (nonatomic, strong) UIImageView *arrow;

- (UIImageView *)defaultGradient;

@end
