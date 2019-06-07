//
//  IMPWebSolutionDelegate.h
//  impcloud_dev
//
//  Created by 衣凡 on 2019/5/28.
//  Copyright © 2019 Elliot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IMPWebSolutionDelegate <NSObject>
@optional
//回调js
- (void)jsCallBack:(UIView *)webView andParams:(NSString*)params;
//返回定位经纬度
- (void)returnToWeb:(NSString *)latitude longitude:(NSString *)longitude;
//返回Json信息
- (void)jsonCallBackString:(NSString *)jsonStr;
//文件上传结果
- (void)uploadFileResult:(BOOL)success;
//文件下载成功返回路径
- (void)downloadFileSuccessWithPath:(NSString *)filePath fileName:(NSString *)filename showStr:(NSString *)showStr;
@end

NS_ASSUME_NONNULL_END