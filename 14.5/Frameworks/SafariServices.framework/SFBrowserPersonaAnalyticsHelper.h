//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SFBrowserPersonaAnalyticsHelper : NSObject
{
    unsigned long long _persona;
    _Bool _hasReportedPresentingFromHostApp;
}

- (void)didPresentFromHostApp:(id)arg1;
- (void)didDismissWithMethod:(int)arg1;
- (void)didLongTapToolbarButton:(int)arg1;
- (void)didTapToolbarButton:(int)arg1;
- (id)initWithPersona:(unsigned long long)arg1;

@end

