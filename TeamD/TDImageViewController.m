//
//  TDImageViewController.m
//  TeamD
//
//  Created by roberto arciniegas on 12/3/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import "TDImageViewController.h"

@interface TDImageViewController ()

@end

@implementation TDImageViewController

- (void)loadView
{
    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.contentMode = UIViewContentModeScaleAspectFit;
    self.view = imageView;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    // We must cast the view to UIImageView so the compiler knows it
    // is okay to send it setImage:
    UIImageView *imageView = (UIImageView *)self.view;
    imageView.image = self.image;
}

@end
