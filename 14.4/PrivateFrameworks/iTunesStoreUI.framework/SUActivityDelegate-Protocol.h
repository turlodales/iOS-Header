//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSArray, SUActivity;

@protocol SUActivityDelegate <NSObject>

@optional
- (void)performActionForActivity:(SUActivity *)arg1;
- (void)activity:(SUActivity *)arg1 prepareWithActivityItems:(NSArray *)arg2;
- (_Bool)activity:(SUActivity *)arg1 canPerformWithActivityItems:(NSArray *)arg2;
@end

