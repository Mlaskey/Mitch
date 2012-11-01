//
//  MainViewController.h
//  mitch
//
//  Created by Mitchell Laskey on 2012-11-01.
//  Copyright (c) 2012 Mitchell Laskey. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
