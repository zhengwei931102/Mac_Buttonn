//
//  WC.m
//  Buttonn
//
//  Created by admin on 17/2/7.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "WC.h"

@interface WC ()

@end

@implementation WC

- (void)windowDidLoad {
    [super windowDidLoad];
    
    self.btn.defaultImage  = [NSImage imageNamed:@"1"];
    self.btn.selectedImage = [NSImage imageNamed:@"2"];
    self.btn.text = self.btn.toolTip = @"OK";
}

@end
