//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>

@class HFCameraPlaybackEngine, HUCameraLoadingActivityIndicatorView, NSString, UIImageView, UILabel, UIView;
@protocol HFCameraRecordingEvent;

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver>
{
    _Bool _canShowOverlayContent;
    _Bool _shouldShowLoadingIndicatorForClipPlayback;
    _Bool _showingNoActivity;
    _Bool _showingError;
    _Bool _showingLoadingIndicator;
    _Bool _reachabilityEventWasOffline;
    HFCameraPlaybackEngine *_playbackEngine;
    UIView *_loadingOverlayView;
    UIImageView *_noResponseView;
    HUCameraLoadingActivityIndicatorView *_loadingActivityIndicator;
    UILabel *_noActivityLabel;
    UILabel *_primaryErrorLabel;
    UILabel *_secondaryErrorLabel;
    unsigned long long _currentAccessMode;
    id <HFCameraRecordingEvent> _lastDisplayedEvent;
    unsigned long long _lastEngineMode;
}

+ (id)_newLabel;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastEngineMode; // @synthesize lastEngineMode=_lastEngineMode;
@property(nonatomic) _Bool reachabilityEventWasOffline; // @synthesize reachabilityEventWasOffline=_reachabilityEventWasOffline;
@property(nonatomic) __weak id <HFCameraRecordingEvent> lastDisplayedEvent; // @synthesize lastDisplayedEvent=_lastDisplayedEvent;
@property(nonatomic) unsigned long long currentAccessMode; // @synthesize currentAccessMode=_currentAccessMode;
@property(nonatomic) _Bool showingLoadingIndicator; // @synthesize showingLoadingIndicator=_showingLoadingIndicator;
@property(nonatomic) _Bool showingError; // @synthesize showingError=_showingError;
@property(nonatomic) _Bool showingNoActivity; // @synthesize showingNoActivity=_showingNoActivity;
@property(retain, nonatomic) UILabel *secondaryErrorLabel; // @synthesize secondaryErrorLabel=_secondaryErrorLabel;
@property(retain, nonatomic) UILabel *primaryErrorLabel; // @synthesize primaryErrorLabel=_primaryErrorLabel;
@property(retain, nonatomic) UILabel *noActivityLabel; // @synthesize noActivityLabel=_noActivityLabel;
@property(retain, nonatomic) HUCameraLoadingActivityIndicatorView *loadingActivityIndicator; // @synthesize loadingActivityIndicator=_loadingActivityIndicator;
@property(retain, nonatomic) UIImageView *noResponseView; // @synthesize noResponseView=_noResponseView;
@property(nonatomic) __weak UIView *loadingOverlayView; // @synthesize loadingOverlayView=_loadingOverlayView;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) _Bool shouldShowLoadingIndicatorForClipPlayback; // @synthesize shouldShowLoadingIndicatorForClipPlayback=_shouldShowLoadingIndicatorForClipPlayback;
@property(nonatomic) _Bool canShowOverlayContent; // @synthesize canShowOverlayContent=_canShowOverlayContent;
- (void)_displayReachabilityMessageForEvent:(id)arg1;
- (_Bool)_shouldShortCircuitBlurEffect;
- (_Bool)shouldShortCircuitLoadingIndicator;
- (id)_errorStringDetailsForError:(id)arg1;
- (void)_updateStateAnimated:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_updateErrorStateAnimated:(_Bool)arg1;
- (void)_updateNoActivityStateAnimated:(_Bool)arg1;
- (void)_updateLoadingStateAnimated:(_Bool)arg1;
- (void)_updateAllOverlayStateAnimated:(_Bool)arg1;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)hu_reloadData;
- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

