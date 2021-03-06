//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBPIPAnalyticsAssistant : NSObject
{
    NSString *_bundleIdentifier;
    long long _contentType;
    _Bool _isAutoPIPEnabled;
    double _activateDuration;
    double _activationTimestamp;
    CDUnknownBlockType _invalidationBlock;
    NSString *_analyticsIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsIdentifier; // @synthesize analyticsIdentifier=_analyticsIdentifier;
- (id)_generateMutableAnalyticsPayload;
- (id)generateAnalyticsPayload;
- (void)invalidate;
- (void)noteBecameInactiveAtTime:(double)arg1;
- (void)noteBecameActiveAtTime:(double)arg1;
- (id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(_Bool)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

@end

