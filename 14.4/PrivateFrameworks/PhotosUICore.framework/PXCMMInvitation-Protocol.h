//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PXAssetCollectionActionManager, PXCMMContext;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@protocol PXCMMInvitation <NSObject, PXMediaTypeAggregating>
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long shareType;
- (void)acceptWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1;
@end

