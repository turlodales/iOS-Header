//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, OS_dispatch_group, UIImage;
@protocol TSAssetDataProviderType;

@protocol TSAssetHandleType
- (void)downloadWithGroup:(OS_dispatch_group *)arg1;
@property(nonatomic, readonly) NSString *uniqueKey;
@property(nonatomic, readonly) UIImage *fallbackImage;
@property(nonatomic, readonly) NSString *filePath;

@optional
@property(nonatomic, readonly) id <TSAssetDataProviderType> assetDataProvider;
@end

