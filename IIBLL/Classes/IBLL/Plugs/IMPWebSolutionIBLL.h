//
//  IMPWebSolutionIBLL.h
//  impcloud_dev
//
//  Created by 衣凡 on 2019/5/27.
//  Copyright © 2019 Elliot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMPWebSolutionDelegate.h"
#import "BeeHive.h"

NS_ASSUME_NONNULL_BEGIN

@protocol IMPWebSolutionIBLL <BHServiceProtocol>
///EMMService-获取设备信息
- (NSString *)bll_EMMService_getDeviceInfo:(NSString *)callBackJSName;

///EMMService-刷新WebView
- (void)bll_EMMService_webviewReload;

///EMMService-刷新WebView
- (void)bll_EMMService_returnEMMstate:(NSDictionary *)jsonDict;

///OpenThirdAppService-打开第三方app
- (void)bll_OpenThirdAppService_openThirdApp:(NSDictionary *)jsonDict currentWebView:(UIView *)currentWebView;

///CameraService-选择照片
- (void)bll_CameraService_getPicture:(NSDictionary *)jsonDict params:(NSDictionary*)params currentView:(UIView *)currentWebView currentWindow:(UIViewController *)currentWindow jsCallBackDelegate:(id<IMPWebSolutionDelegate>)jsCallBackDelegate;

///CameraService-打开相机
- (UIImagePickerController *)bll_CameraService_displayCamera:(NSDictionary *)jsonDict currentView:(UIView *)currentWebView;

///CameraService-清除successFunction
- (void)bll_CameraService_resetSuccessFunctionName;

///PhotoService-浏览图片
- (void)bll_PhotoService_viewImage;

///PhotoService-拍照展示
- (void)bll_PhotoService_takePhotoAndUpload;

///PhotoService-初始化数据 需要先调用初始化传入必要配置
- (void)bll_PhotoService_initData:(NSDictionary *)jsonDic
                           params:(NSDictionary *)params
                          options:(NSDictionary *)options
                   currentWebView:(UIView *)currentWebView
                    currentWindow:(UIViewController *)currentWindow
               jsCallBackDelegate:(id<IMPWebSolutionDelegate>)jsCallBackDelegate;

///PhotoService-选择并上传图片
- (void)bll_PhotoService_getPicture;

///DeviceService-获取设备信息
- (NSString *)bll_DeviceService_getDeviceInfo;

///MapService-获取所有地图应用
- (NSString *)bll_MapService_getAllMapApps;

///MapService-打开地图应用 返回操作是否成功
- (BOOL)bll_MapService_doNaviByMapId:(NSString *)mapId destination:(NSString *)destination;

///GpsService-开启gps
- (void)bll_GpsService_openGps;

///GpsService-关闭gps
- (void)bll_GpsService_closeGps;

///GpsService-获取地理位置
- (void)bll_GpsService_getInfoWithDelegate:(id<IMPWebSolutionDelegate>)gpsDelegate;

///GpsService-获取高德地理位置
- (void)bll_GpsService_getGDInfoWithDelegate:(id<IMPWebSolutionDelegate>)gpsDelegate;

///StaffService-通讯录选人
- (void)bll_StaffService_selectStaff:(BOOL)isMultiSelect currentWindow:(UIViewController *)currentWindow delegate:(id<IMPWebSolutionDelegate>)delegate;

///StaffService-查看人员信息
- (void)bll_StaffService_viewStaff:(NSString *)staffID currentWindow:(UIViewController *)currentWindow;

///StaffService-获取用户信息
- (void)bll_StaffService_userInfoWithDelegate:(id<IMPWebSolutionDelegate>)delegate;

///WindowService-打开新窗口
- (void)bll_WindowService_openWindow:(NSDictionary *)params currentWebView:(UIView *)currentWebView viewController:(UIViewController *)viewController;

///WindowService-设置标题
- (void)bll_WindowService_setTitles:(NSDictionary *)params windowOfWebView:(UIViewController *)windowOfWebView;

///WindowService-设置导航栏右侧按钮
- (void)bll_WindowService_setMenus:(NSDictionary *)params windowOfWebView:(UIViewController *)windowOfWebView;

///FileService-文件服务初始化
- (void)bll_FileService_initData:(NSDictionary *)params currentWebView:(UIView *)webView;

///FileService-上传文件
- (void)bll_FileService_uploadFileWithDelegate:(id<IMPWebSolutionDelegate>)uploadDelegate;

///FileService-下载文件
- (void)bll_FileService_downloadfile:(id<IMPWebSolutionDelegate>)delegate;

///FileService-选择文件
- (void)bll_FileService_selectFile:(id<IMPWebSolutionDelegate>)delegate;

///FileService-获取Base64字串
- (NSString *)bll_FileService_getBase64;

///TelephoneService-拨打电话
- (void)bll_TelephoneService_call:(NSDictionary*)jsonParams;

///TelephoneService-直接进入拨打电话
- (void)bll_TelephoneService_dial:(NSDictionary*)jsonParams;
@end

NS_ASSUME_NONNULL_END
