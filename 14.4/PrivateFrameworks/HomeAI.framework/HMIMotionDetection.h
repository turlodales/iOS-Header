//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject
{
    struct CGRect _boundingBox;
}

@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (_Bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (id)initWithBoundingBox:(struct CGRect)arg1;

@end

