//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext
{
}

+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)liveStreamingViewingContext;
@property(nonatomic) _Bool watchingLive;
@property(copy, nonatomic) NSDate *eventStartTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

