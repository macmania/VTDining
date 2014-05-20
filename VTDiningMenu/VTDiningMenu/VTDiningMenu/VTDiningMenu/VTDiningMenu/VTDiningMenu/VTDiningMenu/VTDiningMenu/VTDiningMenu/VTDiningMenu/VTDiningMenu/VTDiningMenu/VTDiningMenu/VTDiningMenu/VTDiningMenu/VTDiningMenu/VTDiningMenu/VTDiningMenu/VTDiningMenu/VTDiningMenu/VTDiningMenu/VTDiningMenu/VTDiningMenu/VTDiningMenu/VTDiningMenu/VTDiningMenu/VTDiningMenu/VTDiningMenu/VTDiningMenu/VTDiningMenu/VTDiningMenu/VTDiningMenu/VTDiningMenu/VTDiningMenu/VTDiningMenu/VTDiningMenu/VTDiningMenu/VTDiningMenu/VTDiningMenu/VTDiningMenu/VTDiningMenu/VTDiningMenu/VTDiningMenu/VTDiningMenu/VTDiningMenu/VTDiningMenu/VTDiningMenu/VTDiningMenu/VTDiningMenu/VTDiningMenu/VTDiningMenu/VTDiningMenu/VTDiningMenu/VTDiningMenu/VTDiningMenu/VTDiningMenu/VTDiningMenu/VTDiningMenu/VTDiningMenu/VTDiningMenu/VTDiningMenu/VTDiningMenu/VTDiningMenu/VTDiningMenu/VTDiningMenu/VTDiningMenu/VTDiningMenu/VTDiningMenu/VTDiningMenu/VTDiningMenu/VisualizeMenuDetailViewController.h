//
//  VisualizeMenuDetailViewController.h
//  VTDiningMenu
//
//  Created by Jouella Fabe on 1/21/14.
//  Copyright (c) 2014 Jouella Fabe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VisualizeMenuDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
