//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewControllerEventTracker.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMediaViewControllerEventTracker-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol PXDisplayAsset, PXDisplayAssetCollection;

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXMediaViewControllerEventTracker, PXChangeObserver>
{
    _Bool _didInvalidateCurrentlyVisibleMediaOnce;
    NSString *_viewName;
    id <PXDisplayAsset> _displayedAsset;
    id <PXDisplayAssetCollection> _displayedAssetCollection;
    id _currentlyVisibleMedia;
    id _lastVisibleMedia;
    double _currentlyVisibleMediaTimestamp;
    long long _mediaViewedSignpost;
    long long _specificMediaViewedSignpost;
}

- (void).cxx_destruct;
@property(nonatomic) long long specificMediaViewedSignpost; // @synthesize specificMediaViewedSignpost=_specificMediaViewedSignpost;
@property(nonatomic) long long mediaViewedSignpost; // @synthesize mediaViewedSignpost=_mediaViewedSignpost;
@property(readonly, nonatomic) double currentlyVisibleMediaTimestamp; // @synthesize currentlyVisibleMediaTimestamp=_currentlyVisibleMediaTimestamp;
@property(retain, nonatomic) id lastVisibleMedia; // @synthesize lastVisibleMedia=_lastVisibleMedia;
@property(retain, nonatomic) id currentlyVisibleMedia; // @synthesize currentlyVisibleMedia=_currentlyVisibleMedia;
@property(retain, nonatomic) id <PXDisplayAssetCollection> displayedAssetCollection; // @synthesize displayedAssetCollection=_displayedAssetCollection;
@property(retain, nonatomic) id <PXDisplayAsset> displayedAsset; // @synthesize displayedAsset=_displayedAsset;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_logDidEndViewingMedia:(id)arg1 duration:(double)arg2;
- (void)_logDidStartViewingMedia:(id)arg1;
- (void)_updateCurrentlyVisibleMedia;
- (void)_invalidateCurrentlyVisibleMedia;
- (id)initWithViewName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSMutableDictionary *payload;
@property(readonly) Class superclass;

@end

