//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDContainerRep.h>

#import <TSDrawables/TSDMagicMoveMatching-Protocol.h>

@class NSArray, NSOrderedSet;

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
    struct CGRect mLastBoundsForStandardKnobs;
    NSOrderedSet *mCachedGroupedChildReps;
}

- (void).cxx_destruct;
- (id)p_groupedChildReps;
- (void)updateChildrenFromLayout;
@property(readonly, nonatomic) NSArray *allRepsContainedInGroup;
- (void)updateFromLayout;
- (struct CGRect)frameInUnscaledCanvasForMarqueeSelecting;
- (struct CGRect)frameInUnscaledCanvas;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)p_groupInfo;

@end

