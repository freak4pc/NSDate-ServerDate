//
//  ViewController.m
//  NSDate-ServerDateExample
//
//  Created by Shai Mishali on 10/2/13.
//  Copyright (c) 2013 Shai Mishali. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    // Update label every second
    [NSTimer scheduledTimerWithTimeInterval:1 target:self selector:@selector(updateLabel) userInfo:nil repeats:YES];
}

-(void) updateLabel{
    lblDate.text    = [[NSDate serverDate] description];
}

@end
