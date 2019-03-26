//
//  ViewController.m
//  LongConfig
//
//  Created by 龙青磊 on 2019/3/26.
//  Copyright © 2019 龙青磊. All rights reserved.
//

#import "ViewController.h"
#import "Tool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSInteger sum = [Tool addMethodWithCount1:100 count2:200];
    NSLog(@"sum = %ld",(long)sum);
}


@end
