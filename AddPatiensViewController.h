//
//  AddPatiensViewController.h
//  Patiens
//
//  Created by Juan Morillo on 16/11/14.
//  Copyright (c) 2014 JuanMorillios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreViewController.h"

@interface AddPatiensViewController : CoreViewController
@property (weak, nonatomic) IBOutlet UITextField *addPatiensFirstName;

@property (weak, nonatomic) IBOutlet UITextField *addPatiensLastName;

- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;

@end
