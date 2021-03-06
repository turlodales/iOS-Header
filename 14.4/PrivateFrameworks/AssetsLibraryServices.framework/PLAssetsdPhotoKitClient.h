//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

#import <AssetsLibraryServices/PLAssetsdPhotoKitChangesRequestClient-Protocol.h>

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>
{
}

+ (_Bool)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id *)arg3;
+ (void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)setInTransactionProxy:(_Bool)arg1 queue:(id)arg2;
+ (_Bool)inTransactionProxy;
- (id)getUUIDsForCloudIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)sendChangesRequest:(id)arg1 error:(id *)arg2;
- (void)sendChangesRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)clientName;

@end

