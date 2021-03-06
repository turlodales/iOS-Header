//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableMomentShareStatus-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PXCPLUIStatusProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus>
{
    PXCPLUIStatusProvider *_statusProvider;
    id <PXDisplayMomentShare> _momentShare;
    id <PXDisplayAssetFetchResult> _copyingAssetsFetchResult;
    id <PXDisplayAssetFetchResult> _copiedAssetsFetchResult;
    id <PXDisplayAssetFetchResult> _allAssetsFetchResult;
    id <PXSectionedFetchResult> _participantsFetchResult;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXSectionedFetchResult> participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> allAssetsFetchResult; // @synthesize allAssetsFetchResult=_allAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> copiedAssetsFetchResult; // @synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> copyingAssetsFetchResult; // @synthesize copyingAssetsFetchResult=_copyingAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayMomentShare> momentShare; // @synthesize momentShare=_momentShare;
- (id)_actionManager;
- (id)owner;
- (void)setParticipantsFetchResult:(id)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setCopyingAssetsFetchResult:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

