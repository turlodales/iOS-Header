//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXZoomAnimationContext-Protocol.h>

@class NSMutableArray, NSString, PXNonuniformTransform, PXRegionOfInterest;
@protocol OS_dispatch_group;

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext>
{
    NSObject<OS_dispatch_group> *_animationGroup;
    NSMutableArray *_cleanupHandlers;
    _Bool _matchingRegionsOfInterest;
    _Bool _keepsSourceRegionOfInterestContent;
    long long _animationType;
    double _animationDuration;
    double _fromAlpha;
    PXNonuniformTransform *_fromTransform;
    PXRegionOfInterest *_fromRegionOfInterest;
    double _toAlpha;
    PXNonuniformTransform *_toTransform;
    PXRegionOfInterest *_toRegionOfInterest;
    CDUnknownBlockType __allAnimationsCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setAllAnimationsCompletionHandler:) CDUnknownBlockType _allAnimationsCompletionHandler; // @synthesize _allAnimationsCompletionHandler=__allAnimationsCompletionHandler;
@property(nonatomic) _Bool keepsSourceRegionOfInterestContent; // @synthesize keepsSourceRegionOfInterestContent=_keepsSourceRegionOfInterestContent;
@property(nonatomic, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest; // @synthesize matchingRegionsOfInterest=_matchingRegionsOfInterest;
@property(retain, nonatomic) PXRegionOfInterest *toRegionOfInterest; // @synthesize toRegionOfInterest=_toRegionOfInterest;
@property(retain, nonatomic) PXNonuniformTransform *toTransform; // @synthesize toTransform=_toTransform;
@property(nonatomic) double toAlpha; // @synthesize toAlpha=_toAlpha;
@property(retain, nonatomic) PXRegionOfInterest *fromRegionOfInterest; // @synthesize fromRegionOfInterest=_fromRegionOfInterest;
@property(retain, nonatomic) PXNonuniformTransform *fromTransform; // @synthesize fromTransform=_fromTransform;
@property(nonatomic) double fromAlpha; // @synthesize fromAlpha=_fromAlpha;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void)registerCleanupHandler:(CDUnknownBlockType)arg1;
- (void)didEndAnimation:(long long)arg1;
- (long long)willBeginAnimation;
- (void)cleanup;
- (void)notifyWhenAllAnimationsCompleted:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

