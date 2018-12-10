//
//  YBHTHeaderFooterModelProtocol.h
//  YBHandyTableViewDemo
//
//  Created by 杨波 on 2018/12/10.
//  Copyright © 2018 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YBHTHeaderFooterModelProtocol <NSObject>

@required

- (Class<YBHTHeaderFooterProtocol>)ybht_headerFooterClass;

@optional

- (NSString *)ybht_headerFooterReuseIdentifier;

@end

NS_ASSUME_NONNULL_END
