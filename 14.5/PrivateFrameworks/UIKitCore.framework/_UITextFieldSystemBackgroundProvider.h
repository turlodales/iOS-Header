//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

@class UITextFieldBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider
{
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;
- (void).cxx_destruct;
- (void)_buildDescription:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)enabledDidChangeAnimated:(_Bool)arg1;
- (void)removeFromTextField;
- (id)overridingSetBackgroundColor:(id)arg1;
- (id)overridingGetBackgroundColor;
- (void)addToTextField:(id)arg1;
- (id)backgroundView;
- (long long)associatedBorderStyle;
- (Class)systemBackgroundViewClass;
- (id)preferredMetricsProvider;

@end

