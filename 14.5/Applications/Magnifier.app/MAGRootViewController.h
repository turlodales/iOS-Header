//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "MAGFilterSelectionViewControllerDelegate-Protocol.h"
#import "MAGLiveMagnifierViewDelegate-Protocol.h"
#import "MAGLiveViewControlPanelDelegate-Protocol.h"
#import "MAGSnapshotViewDelegate-Protocol.h"

@class AVCaptureDevice, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, AXDispatchTimer, MAGAutoBrightnessManager, MAGControlPanel, MAGFilterSelectionViewController, MAGFilterSelectionZoomTransitioningDelegate, MAGLiveMagnifierView, MAGSnapshotView, NSLayoutConstraint, NSObject, NSString, UIImage, UITapGestureRecognizer;
@protocol AVCapturePhotoCaptureDelegate, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAGRootViewController : UIViewController <MAGFilterSelectionViewControllerDelegate, MAGLiveViewControlPanelDelegate, MAGLiveMagnifierViewDelegate, MAGSnapshotViewDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _torchOnWhenSnapshotTaken;
    _Bool _cameraDeviceHasTorch;
    _Bool _viewHasAppeared;
    _Bool _proceedWithControlsHidingForSnapshotView;
    _Bool _transitioningToSnapshotView;
    _Bool _adjustingMagnificationFactorViaControlPanel;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureDevice *_cameraDevice;
    AVCaptureSession *_currentSession;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    MAGLiveMagnifierView *_liveMagnifierView;
    MAGControlPanel *_liveViewControlPanel;
    double _zoomFactorAtGestureStart;
    NSLayoutConstraint *_liveViewControlPanelOnscreenYConstraint;
    NSLayoutConstraint *_liveViewControlPanelOffscreenYConstraint;
    NSObject<OS_dispatch_queue> *_videoSampleQueue;
    id <NSObject> _lastVideoSample;
    NSString *_hqSnapshotFilesystemPath;
    id <AVCapturePhotoCaptureDelegate> _currentPhotoCaptureDelegate;
    MAGSnapshotView *_snapshotView;
    UITapGestureRecognizer *_snapshotViewTapGestureRecognizer;
    UITapGestureRecognizer *_snapshotViewDoubleTapGestureRecognizer;
    MAGFilterSelectionZoomTransitioningDelegate *_filterSelectionTransitioningDelegate;
    MAGFilterSelectionViewController *_presentedFilterSelectionVC;
    CDUnknownBlockType _snapshotReplacementBlockForUnitTesting;
    CDUnknownBlockType _finishedRampingVideoZoomCallback;
    MAGAutoBrightnessManager *_autoBrightnessManager;
    AXDispatchTimer *_activeInactiveTimer;
    UIImage *_savedHiResImageForLockScreenActivation;
    double _savedMagnificationFactorForLockScreenActivation;
}

- (void).cxx_destruct;
@property(nonatomic) double savedMagnificationFactorForLockScreenActivation; // @synthesize savedMagnificationFactorForLockScreenActivation=_savedMagnificationFactorForLockScreenActivation;
@property(retain, nonatomic) UIImage *savedHiResImageForLockScreenActivation; // @synthesize savedHiResImageForLockScreenActivation=_savedHiResImageForLockScreenActivation;
@property(retain, nonatomic) AXDispatchTimer *activeInactiveTimer; // @synthesize activeInactiveTimer=_activeInactiveTimer;
@property(retain, nonatomic) MAGAutoBrightnessManager *autoBrightnessManager; // @synthesize autoBrightnessManager=_autoBrightnessManager;
@property(copy, nonatomic) CDUnknownBlockType finishedRampingVideoZoomCallback; // @synthesize finishedRampingVideoZoomCallback=_finishedRampingVideoZoomCallback;
@property(copy, nonatomic) CDUnknownBlockType snapshotReplacementBlockForUnitTesting; // @synthesize snapshotReplacementBlockForUnitTesting=_snapshotReplacementBlockForUnitTesting;
@property(retain, nonatomic) MAGFilterSelectionViewController *presentedFilterSelectionVC; // @synthesize presentedFilterSelectionVC=_presentedFilterSelectionVC;
@property(retain, nonatomic) MAGFilterSelectionZoomTransitioningDelegate *filterSelectionTransitioningDelegate; // @synthesize filterSelectionTransitioningDelegate=_filterSelectionTransitioningDelegate;
@property(nonatomic) _Bool adjustingMagnificationFactorViaControlPanel; // @synthesize adjustingMagnificationFactorViaControlPanel=_adjustingMagnificationFactorViaControlPanel;
@property(retain, nonatomic) UITapGestureRecognizer *snapshotViewDoubleTapGestureRecognizer; // @synthesize snapshotViewDoubleTapGestureRecognizer=_snapshotViewDoubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *snapshotViewTapGestureRecognizer; // @synthesize snapshotViewTapGestureRecognizer=_snapshotViewTapGestureRecognizer;
@property(nonatomic) _Bool transitioningToSnapshotView; // @synthesize transitioningToSnapshotView=_transitioningToSnapshotView;
@property(nonatomic) _Bool proceedWithControlsHidingForSnapshotView; // @synthesize proceedWithControlsHidingForSnapshotView=_proceedWithControlsHidingForSnapshotView;
@property(retain, nonatomic) MAGSnapshotView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) id <AVCapturePhotoCaptureDelegate> currentPhotoCaptureDelegate; // @synthesize currentPhotoCaptureDelegate=_currentPhotoCaptureDelegate;
@property(retain, nonatomic) NSString *hqSnapshotFilesystemPath; // @synthesize hqSnapshotFilesystemPath=_hqSnapshotFilesystemPath;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool cameraDeviceHasTorch; // @synthesize cameraDeviceHasTorch=_cameraDeviceHasTorch;
@property(nonatomic) _Bool torchOnWhenSnapshotTaken; // @synthesize torchOnWhenSnapshotTaken=_torchOnWhenSnapshotTaken;
@property(retain) id <NSObject> lastVideoSample; // @synthesize lastVideoSample=_lastVideoSample;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoSampleQueue; // @synthesize videoSampleQueue=_videoSampleQueue;
@property(retain, nonatomic) NSLayoutConstraint *liveViewControlPanelOffscreenYConstraint; // @synthesize liveViewControlPanelOffscreenYConstraint=_liveViewControlPanelOffscreenYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *liveViewControlPanelOnscreenYConstraint; // @synthesize liveViewControlPanelOnscreenYConstraint=_liveViewControlPanelOnscreenYConstraint;
@property(nonatomic) double zoomFactorAtGestureStart; // @synthesize zoomFactorAtGestureStart=_zoomFactorAtGestureStart;
@property(retain, nonatomic) MAGControlPanel *liveViewControlPanel; // @synthesize liveViewControlPanel=_liveViewControlPanel;
@property(retain, nonatomic) MAGLiveMagnifierView *liveMagnifierView; // @synthesize liveMagnifierView=_liveMagnifierView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCapturePhotoOutput *photoOutput; // @synthesize photoOutput=_photoOutput;
@property(retain, nonatomic) AVCaptureSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) AVCaptureDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
- (void)resetForUnitTesting;
- (void)waitForCameraOperationsToFinishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)snapshotViewForUnitTesting;
- (id)cameraDeviceForUnitTesting;
- (id)controlPanelForUnitTesting;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)filterSelectionMadeInViewController:(id)arg1;
- (void)updateFiltersForCurrentAmbientBrightness;
- (void)resumeFromTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepForTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unblackoutCurrentImageForReducedMotionFilterSelectionTransitionAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blackoutCurrentImageForReducedMotionFilterSelectionTransitionAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performActivationTransitions;
- (void)performDeactivationTransitions;
- (void)changeBlackoutStatusTo:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reconnectPreviewLayerFromFilterSelectionTransitionIfNecessary;
- (void)disconnectPreviewLayerForFilterSelectionTransitionIfNecessary;
- (void)filtersButtonLongPressedForControlPanel:(id)arg1;
- (void)filtersButtonPressedForControlPanel:(id)arg1;
- (_Bool)showingSnapshot;
- (void)snapshotViewPanned:(id)arg1;
- (void)snapshotViewZoomed:(id)arg1;
- (void)snapshotViewDoubleTapped:(id)arg1;
- (void)snapshotViewTapped:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)saveSnapshotToCameraRoll:(id)arg1;
- (void)shareSnapshot:(id)arg1;
- (void)setSnapshotMagnificationFactor:(double)arg1 animated:(_Bool)arg2;
- (void)setupSnapshotViewwithLowResolutionStartImage:(id)arg1 highResolutionFinalImage:(id)arg2 startingZoomFactor:(double)arg3 startBlackedOut:(_Bool)arg4;
- (void)transitionToSnapshotFromLiveView;
- (id)imageFromLastVideoSample;
- (void)finishedRampingVideoZoom;
- (void)transitionToLiveViewFromSnapshotView;
- (void)updateZoomViewsAXHidden;
- (void)removeHQSnapshotFile;
- (void)transitionLiveMagnifierViewBackToNormal;
- (void)restartSessionFromSnapshot:(CDUnknownBlockType)arg1;
- (void)pauseSessionForSnapshot;
- (void)restartSessionAndTransitionLiveMagnifierBackToNormal;
- (void)volumeButtonPressed;
- (void)snapshotButtonPressedForControlPanel:(id)arg1;
- (void)zoomSliderValueChanged:(double)arg1 forControlPanel:(id)arg2;
- (void)torchModeChangedTo:(_Bool)arg1 forControlPanel:(id)arg2;
- (void)manualFocusChangedTo:(_Bool)arg1 forControlPanel:(id)arg2;
- (void)liveMagnifierViewAccessibilityIncremented:(id)arg1;
- (void)liveMagnifierViewAccessibilityDecremented:(id)arg1;
- (void)setTorchOn:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)fingerDidPan:(id)arg1;
- (void)fingersDidPinch:(id)arg1;
- (void)fingerDidTap:(id)arg1;
- (void)fingerDidDoubleTap:(id)arg1;
- (void)animateControlPanelOut:(CDUnknownBlockType)arg1;
- (void)animateControlPanelIn:(CDUnknownBlockType)arg1;
- (_Bool)controlPanelActive;
- (void)disconnectPreviewLayerFromSession;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)manualFocusOnViewPoint:(struct CGPoint)arg1;
- (void)switchToAutofocusMode;
- (void)lockFocus;
- (void)setFocusPointFromViewPoint:(struct CGPoint)arg1;
- (void)switchToFocusMode:(long long)arg1;
- (void)createSessionIfNeededConnectingPreviewLayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startSessionConnectingPreviewLayer:(id)arg1;
- (void)endSession;
- (void)currentMagnificationFactor:(CDUnknownBlockType)arg1;
- (double)_currentMagnificationFactor;
- (void)setLiveMagnificationFactor:(double)arg1;
- (void)executeBlockSynchronouslyWithLockedCameraDevice:(CDUnknownBlockType)arg1;
- (void)executeBlockAsynchronouslyWithLockedCameraDevice:(CDUnknownBlockType)arg1;
- (void)_executeBlockWithLockedCameraDevice:(CDUnknownBlockType)arg1;
- (id)_bestCaptureFormatForDevice:(id)arg1;
- (id)_bestCaptureDevice;
- (long long)bestStabilizationModeForDevice:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

