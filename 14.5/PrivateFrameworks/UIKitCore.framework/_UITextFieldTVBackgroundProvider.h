//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

#import <UIKitCore/_UITextFieldMetricsProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldTVBackgroundProvider : _UITextFieldViewBackgroundProvider <_UITextFieldMetricsProvider>
{
}

@property(readonly, nonatomic) _Bool shouldExtendCaretHeight;
- (struct CGSize)intrinsicSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1;
- (id)preferredMetricsProvider;
- (id)backgroundView;
- (long long)associatedBorderStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

