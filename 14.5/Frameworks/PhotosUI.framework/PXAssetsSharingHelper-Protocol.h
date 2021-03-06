//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray;
@protocol PXAssetsSharingHelperDelegate;

@protocol PXAssetsSharingHelper <NSObject>
+ (void)copyAssets:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@property(nonatomic) __weak id <PXAssetsSharingHelperDelegate> delegate;
- (void)ensureLocalAssetsForCloudPhotoSharing:(NSArray *)arg1 completion:(void (^)(_Bool))arg2;
- (void)copyAssets:(NSArray *)arg1;
@end

