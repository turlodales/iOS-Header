//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIScreen;

@protocol _UIScreenBasedObject <NSObject>
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(NSDictionary *)arg1;
- (id)_initWithScreen:(UIScreen *)arg1 options:(NSDictionary *)arg2;
@end

