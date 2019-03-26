//
//  Tool.h
//  Tools
//
//  Created by 龙青磊 on 2019/3/26.
//  Copyright © 2019 龙青磊. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Tool : NSObject

/**
 求和方法

 @param count1 一个加数
 @param count2 另一个加数
 @return 结果和
 */
+ (NSInteger)addMethodWithCount1:(NSInteger)count1 count2:(NSInteger)count2;

@end

NS_ASSUME_NONNULL_END
