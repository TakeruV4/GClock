//
//  DetailViewController.h
//  GClock
//
//  Created by 村川 孟 on 2013/08/13.
//  Copyright (c) 2013年 村川 孟. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
