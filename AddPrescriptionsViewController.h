//
//  AddPrescriptionsViewController.h
//  Patiens
//
//  Created by Juan Morillo on 16/11/14.
//  Copyright (c) 2014 JuanMorillios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddPrescriptionsViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *addPrescriptionName;
@property (weak, nonatomic) IBOutlet UITextField *addPrescriptionInstrutions;
- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;

@end
