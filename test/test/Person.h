//
//  Person.h
//  test
//
//  Created by yx on 2017/3/21.
//  Copyright © 2017年 yx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property(nonatomic,copy)NSString *name;  
  
@property(nonatomic,assign)int age;


@property(nonatomic,assign)int weight;

@property(nonatomic,copy)NSString *tel;

/**
  用户id
 **/

@property(nonatomic,copy)NSString *idCardNum;

/** 用户详细地址**/
@property(nonatomic,copy)NSString *detailAddress;


@end
