//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SRAnalyticsSupplement : NSObject
{
    NSString *_lastComputedRefId;
    int _lastComputedMode;
}

- (void).cxx_destruct;
- (int)computedModeForRefId:(id)arg1;
- (void)didComputeMode:(int)arg1 forAceCommandWithRefId:(id)arg2;

@end

