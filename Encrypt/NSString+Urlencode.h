//
//  NSString+Urlencode.h
//  SystemPhotos
//
//  Created by 李金柱 on 16/1/15.
//  Copyright © 2016年 Mr.Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Urlencode)
+(NSString *)encodeString:(NSString*)unencodedString;
-(NSString *)decodeString:(NSString*)encodedString;
@end
