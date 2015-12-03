//
//  TDItemCell.h
//  TeamD
//
//  Created by roberto arciniegas on 12/3/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface TDItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;

@property (copy, nonatomic) void (^actionBlock)(void);

@end
