//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray;
@protocol AVTPhysicsControllerDelegate;

@interface AVTPhysicsController : NSObject
{
    NSMutableArray *_physicsRigs;
    _Bool _setupDone;
    _Bool _firstFrameRendered;
    id <AVTPhysicsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVTPhysicsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetToPhysicsState:(id)arg1;
- (id)physicsState;
- (void)setupPhysicsIfNeeded;
- (void)downforcesDidChange;
- (void)_setupPhysicsChain:(id)arg1;
- (void)_setupCollisionNode:(id)arg1;
- (void)setupPhysics;
- (MISSING_TYPE *)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2;
- (void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2;
- (void)applyForcesWithMultiplier:(double)arg1;

@end

