//
//  DTCustomColoredAccessory.h
//  DropDownTableView
//
//  Created by Pham Quoc Binh Giang on 1/20/15.
//  Copyright (c) 2015 Pham Quoc Binh Giang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum
{
    DTCustomColoredAccessoryTypeRight = 0,
    DTCustomColoredAccessoryTypeUp,
    DTCustomColoredAccessoryTypeDown
} DTCustomColoredAccessoryType;

@interface DTCustomColoredAccessory : UIControl

{
	UIColor *_accessoryColor;
	UIColor *_highlightedColor;

    DTCustomColoredAccessoryType _type;
}

@property (nonatomic, retain) UIColor *accessoryColor;
@property (nonatomic, retain) UIColor *highlightedColor;

@property (nonatomic, assign)  DTCustomColoredAccessoryType type;

+ (DTCustomColoredAccessory *)accessoryWithColor:(UIColor *)color type:(DTCustomColoredAccessoryType)type;

@end
