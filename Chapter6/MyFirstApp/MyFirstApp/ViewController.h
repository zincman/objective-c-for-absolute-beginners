//
//  ViewController.h
//  MyFirstApp
//
//  Created by Derek Lu on 11/05/2017.
//  Copyright © 2017 Derek Lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel *nameLabel;

- (IBAction)showName:(id)sender;

@end

