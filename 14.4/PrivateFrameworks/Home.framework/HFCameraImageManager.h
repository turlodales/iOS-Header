//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCameraClipVideoAssetOperationCache, HFCameraImageCache, HMCameraProfile, NSMutableDictionary, NSOperationQueue;

@interface HFCameraImageManager : NSObject
{
    HMCameraProfile *_cameraProfile;
    HFCameraClipVideoAssetOperationCache *_fetchCache;
    NSOperationQueue *_posterFrameQueue;
    HFCameraImageCache *_imageCache;
    NSMutableDictionary *_imageObservers;
    NSMutableDictionary *_generationObservers;
    NSMutableDictionary *_inProgressOperations;
    NSMutableDictionary *_requestedHeroFrameCache;
    NSMutableDictionary *_requestedFaceCropCache;
    NSMutableDictionary *_requestedPosterFrameCache;
}

+ (id)clipIdentifierStringFromDate:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *requestedPosterFrameCache; // @synthesize requestedPosterFrameCache=_requestedPosterFrameCache;
@property(retain, nonatomic) NSMutableDictionary *requestedFaceCropCache; // @synthesize requestedFaceCropCache=_requestedFaceCropCache;
@property(retain, nonatomic) NSMutableDictionary *requestedHeroFrameCache; // @synthesize requestedHeroFrameCache=_requestedHeroFrameCache;
@property(retain, nonatomic) NSMutableDictionary *inProgressOperations; // @synthesize inProgressOperations=_inProgressOperations;
@property(retain, nonatomic) NSMutableDictionary *generationObservers; // @synthesize generationObservers=_generationObservers;
@property(retain, nonatomic) NSMutableDictionary *imageObservers; // @synthesize imageObservers=_imageObservers;
@property(retain, nonatomic) HFCameraImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSOperationQueue *posterFrameQueue; // @synthesize posterFrameQueue=_posterFrameQueue;
@property(retain, nonatomic) HFCameraClipVideoAssetOperationCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(nonatomic) __weak HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void)dealloc;
- (void)resetForCameraDismissal;
- (void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2;
- (void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3;
- (void)purgePosterFrames;
- (id)keyForClip:(id)arg1;
- (id)keyForClip:(id)arg1 timeOffset:(double)arg2;
- (double)_timeScaleAdjustedOffset:(double)arg1;
- (void)_generateMissingPosterFrameImageForClip:(id)arg1 atOffset:(double)arg2 observer:(id)arg3;
- (void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3;
- (void)_generateImageUsingAsset:(id)arg1 clip:(id)arg2 offset:(double)arg3 observer:(id)arg4;
- (void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2;
- (void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4;
- (void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;
- (void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3;
- (void)removeHeroFrameImageObserver:(id)arg1 forClip:(id)arg2;
- (void)failToFindHeroFrameForClip:(id)arg1;
- (void)addHeroFrameImageObserver:(id)arg1 forClip:(id)arg2;
- (void)removeFaceCropImageObserver:(id)arg1 forPersonName:(id)arg2;
- (void)failedToFindFaceCropForClip:(id)arg1 withKey:(id)arg2;
- (void)addFaceCropImageObserver:(id)arg1 forClip:(id)arg2 usingSignificantEvent:(id)arg3;
- (id)imageObserversForKey:(id)arg1;
- (id)representativeImageForClip:(id)arg1;
- (id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (id)faceCropImagesForClip:(id)arg1 atOffset:(double)arg2;
- (id)faceCropForPersonName:(id)arg1;
- (id)faceCropForClip:(id)arg1 atOffset:(double)arg2;
- (id)heroFrameImageForClip:(id)arg1;
- (id)init;

@end

