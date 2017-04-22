//
//  NSData+AES.h
//  ToolProject
//
//  Created by 李金柱 on 15/12/24.
//  Copyright © 2015年 Mr.Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AES)
/**
 *  AES加密
 *
 *  @param key 加密字符串
 *
 *  @return 加密结果
  这里AES在iOS加过密以后以nsdata的形式存下来，如果想以nsstring形式存储，那么对nsdata进行base64位编码。
 */
- (NSData *)AES256EncryptWithKey:(NSString *)key;   //加密
- (NSData *)AES256DecryptWithKey:(NSString *)key;   //解密
@end
