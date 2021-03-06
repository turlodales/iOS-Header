//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface PUFontManager : PXObservable
{
    UIFont *_albumListTitleLabelFont;
    UIFont *_albumListSubtitleLabelFont;
    UIFont *_albumListSectionTitleLabelFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *albumListSectionTitleLabelFont; // @synthesize albumListSectionTitleLabelFont=_albumListSectionTitleLabelFont;
@property(retain, nonatomic) UIFont *albumListSubtitleLabelFont; // @synthesize albumListSubtitleLabelFont=_albumListSubtitleLabelFont;
@property(retain, nonatomic) UIFont *albumListTitleLabelFont; // @synthesize albumListTitleLabelFont=_albumListTitleLabelFont;
- (void)_setNeedsUpdate;
- (void)invalidateFonts;
- (void)_preferredContentSizeChanged:(id)arg1;
- (id)mutableChangeObject;
- (void)dealloc;
- (id)init;

@end

