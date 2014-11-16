//
//  AddPatiensViewController.m
//  Patiens
//
//  Created by Juan Morillo on 16/11/14.
//  Copyright (c) 2014 JuanMorillios. All rights reserved.
//

#import "AddPatiensViewController.h"

@interface AddPatiensViewController ()

@end

@implementation AddPatiensViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)cancel:(UIBarButtonItem *)sender {
    
    
    [super cancelAndDimiss];
}

- (IBAction)save:(UIBarButtonItem *)sender {

    [super saveAndDimiss];

}
@end
