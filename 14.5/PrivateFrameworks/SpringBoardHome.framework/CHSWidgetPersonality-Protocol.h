//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString;
@protocol CHSWidgetPersonality;

@protocol CHSWidgetPersonality <NSObject>
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
- (_Bool)matchesPersonality:(id <CHSWidgetPersonality>)arg1;
@end

