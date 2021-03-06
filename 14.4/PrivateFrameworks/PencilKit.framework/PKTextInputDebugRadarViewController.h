//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/PKTextInputDebugReplayViewDelegate-Protocol.h>

@class NSArray, NSString, PKTextInputDebugReplayView, PKTextInputDebugSharpenerLog, UIBarButtonItem, UIButton, UISegmentedControl;

@interface PKTextInputDebugRadarViewController : UIViewController <PKTextInputDebugReplayViewDelegate>
{
    PKTextInputDebugSharpenerLog *_sharpenerLog;
    UISegmentedControl *_detailControl;
    NSArray *_contextLabels;
    NSArray *_intendedTexts;
    PKTextInputDebugReplayView *_replayView;
    UIButton *_replayPlayPauseButton;
    UIBarButtonItem *_submitButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIButton *replayPlayPauseButton; // @synthesize replayPlayPauseButton=_replayPlayPauseButton;
@property(retain, nonatomic) PKTextInputDebugReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) NSArray *intendedTexts; // @synthesize intendedTexts=_intendedTexts;
@property(retain, nonatomic) NSArray *contextLabels; // @synthesize contextLabels=_contextLabels;
@property(retain, nonatomic) UISegmentedControl *detailControl; // @synthesize detailControl=_detailControl;
@property(readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog; // @synthesize sharpenerLog=_sharpenerLog;
- (void)_launchTTRAndDismiss;
- (id)_generateLaunchURLWithLogFilename:(id)arg1;
- (id)_logEntryTextForRadarTitle;
- (id)_loggedLocaleDescription;
- (id)_accumulatedLogEntryTextsForRadar;
- (id)_buildString;
- (id)_deviceString;
- (void)debugReplayViewDidFinishReplay:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleSubmitRadarButton:(id)arg1;
- (void)handlePlayPauseButton:(id)arg1;
- (void)handleDetailControl:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)updateCurrentLogEntries;
- (id)_contextStringForLogEntry:(id)arg1;
- (void)updatePlayPauseButtonTitle;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithSharpenerLog:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

