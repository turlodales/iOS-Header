//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableMemoryViewModel-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PXMemoryViewModel : PXObservable <PXMutableMemoryViewModel>
{
    _Bool _isHighlighted;
    NSString *_localizedDateText;
    NSString *_localizedTitle;
    id <PXDisplayAsset> _keyAsset;
    long long _specSet;
    long long _variant;
    struct UIEdgeInsets _layoutMargins;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) long long specSet; // @synthesize specSet=_specSet;
@property(readonly, nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSString *localizedDateText; // @synthesize localizedDateText=_localizedDateText;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setVariant:(long long)arg1;
- (void)setSpecSet:(long long)arg1;
- (void)setIsHighlighted:(_Bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setLocalizedDateText:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

