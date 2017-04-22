//
//  DES.h
//  SystemPhotos
//
//  Created by 李金柱 on 16/1/13.
//  Copyright © 2016年 Mr.Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DES : NSObject
// 加密方法
+ (NSString*)encrypt:(NSString*)plainText;
// 解密方法
+ (NSString*)decrypt:(NSString*)encryptText;
@end
