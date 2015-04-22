//
//  HHFlowModel.h
//  HHNewsEast
//
//  Created by Luigi on 14-9-21.
//  Copyright (c) 2014年 Luigi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HHFlowModel : NSObject
@property(nonatomic,copy)NSString * flowID;
@property(nonatomic,copy)NSString * flowTitle;//对应的标题
@property(nonatomic,copy)NSString * flowImageUrl;//图片路径
@property(nonatomic,copy)NSString * flowSourceUrl;//对应的资源路径


@end
