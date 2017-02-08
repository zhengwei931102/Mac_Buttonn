//
//  MYButton.h
//  RIPperDVD
//
//  Created by admin on 17/1/16.
//  Copyright © 2017年 admin. All rights reserved.
//
/**
 *  🖱enter，exit不同图片的普遍按钮
 *
 *
 */
#import <Cocoa/Cocoa.h>

@interface MYButton : NSButton
@property (strong) NSImage *defaultImage;
@property (strong) NSImage *selectedImage;
@property (nonatomic,retain)NSColor *titleColor;//有默认值白色
@property (nonatomic,assign)int fontSize;//有默认值13
@property (nonatomic,copy) NSString *text;//默认为空
@end
