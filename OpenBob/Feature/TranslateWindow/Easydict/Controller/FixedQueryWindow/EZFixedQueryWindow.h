//
//  MainWindow.h
//  Bob
//
//  Created by tisfeng on 2022/11/3.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EZBaseQueryWindow.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZFixedQueryWindow : EZBaseQueryWindow

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
