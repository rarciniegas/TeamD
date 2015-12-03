//
//  TDDetailViewController.h
//  TeamD
//
//  Created by roberto arciniegas on 12/3/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TDItem;

@interface TDDetailViewController : UIViewController

@property (nonatomic, strong) TDItem *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (instancetype)initForNewItem:(BOOL)isNew;

@end


