//
//  ShareIBLL.h
//  impcloud_dev
//
//  Created by 衣凡 on 2019/11/18.
//  Copyright © 2019 Elliot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ShareIBLL <BHServiceProtocol>

/// 判断聊天是否存在
- (BOOL)judgeCommunicateExist;

#pragma mark - 分享预览界面
/// 分享预览界面，传入多个文件路径
- (UIViewController *)getUploadOverviewByPathArray:(NSMutableArray *)uploadFilePathArray;

/// 分享预览界面，传入网址信息
- (UIViewController *)getUploadOverviewByUrlInfo:(NSDictionary *)sharedUrlInfo;

/// 分享预览界面，云盘文件分享
- (UIViewController *)getUploadOverviewByCloudFiles:(NSMutableArray *)cloudFiles;

#pragma mark - 分享选择目标界面，直接选择频道人员
/// 分享选择目标界面，文件路径数组
- (UIViewController *)getSelectShareTargetByPathArray:(NSMutableArray *)uploadFilePathArray;

/// 分享选择目标界面，网址信息
- (UIViewController *)getSelectShareTargetByUrlInfo:(NSDictionary *)sharedUrlInfo;

/// 分享选择目标界面，待分享的文字
- (UIViewController *)getSelectShareTargetBySharedString:(NSString *)sharedString;

/// 分享选择目标界面，消息对象
- (UIViewController *)getSelectShareTargetByMessage:(NSArray *)sharedMessages;

/// 分享选择目标界面，云盘文件
- (UIViewController *)getSelectShareTargetByCloudFiles:(NSMutableArray *)sharedCloudFiles;

@end

NS_ASSUME_NONNULL_END
