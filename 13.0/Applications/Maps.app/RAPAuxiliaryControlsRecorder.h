//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, RAPAuxiliaryControlCarPlay, RAPAuxiliaryControlWatch;
@protocol RAPAuxiliaryControl, RAPAuxiliaryControlsRecording;

__attribute__((visibility("hidden")))
@interface RAPAuxiliaryControlsRecorder : NSObject
{
    _Bool _started;
    _Bool _stopped;
    _Bool _waitingToSetActiveWatchAsOriginating;
    unsigned long long _countOfNanoRegistryFetchesInFlight;
    NSMutableArray *_relevantAuxiliaryControls;
    id <RAPAuxiliaryControl> _originatingAuxiliaryControl;
    RAPAuxiliaryControlCarPlay *_currentCarPlayAuxiliaryControl;
    RAPAuxiliaryControlWatch *_currentActiveWatchAuxiliaryControl;
}

+ (void)fetchCurrentlyConnectedControlsRecordingOrigin:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchCurrentlyConnectedControlsWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <RAPAuxiliaryControlsRecording> copyCurrentPartialRecording;
- (void)_setOriginatingControlToCurrentActiveWatch;
- (void)_updateWatchControlsWithFetchCompletion:(CDUnknownBlockType)arg1;
- (void)_updateWatchControls;
- (void)_setOriginatingControlToCurrentCarPlayScreen;
- (void)_updateCurrentCarPlayControl;
- (void)_addControlIfNotDuplicate:(id)arg1;
- (void)setOriginatingDeviceFromOrigin:(long long)arg1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)startWithFetchCompletion:(CDUnknownBlockType)arg1;

@end

