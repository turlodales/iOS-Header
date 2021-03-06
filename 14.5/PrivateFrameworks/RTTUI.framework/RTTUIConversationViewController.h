//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RTTUI/RTTUIServiceCellDelegate-Protocol.h>
#import <RTTUI/RTTUIUtteranceCellDelegate-Protocol.h>
#import <RTTUI/UITableViewDataSource-Protocol.h>
#import <RTTUI/UITableViewDelegate-Protocol.h>
#import <RTTUI/UITextViewDelegate-Protocol.h>

@class AXDispatchTimer, CAShapeLayer, DDParsecCollectionViewController, NSDictionary, NSMutableArray, NSMutableCharacterSet, NSMutableString, NSString, RTTConversation, RTTUITextView, RTTUtterance, TUCall, UIButton, UITableView;
@protocol BSInvalidatable;

@interface RTTUIConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate>
{
    RTTUITextView *_textView;
    CAShapeLayer *_bubbleLayer;
    UIButton *_gaButton;
    AXDispatchTimer *_ttyPredictionsTimer;
    AXDispatchTimer *_realTimeTimeout;
    AXDispatchTimer *_muteStatusTimeout;
    NSMutableCharacterSet *_unsupportedCharacterSet;
    NSDictionary *_asciiSubstitutions;
    AXDispatchTimer *_voAnnouncementTimer;
    NSMutableString *_voAnnouncementBuffer;
    NSMutableArray *_serviceUpdates;
    id <BSInvalidatable> _sleepTimerDisabledAssertion;
    AXDispatchTimer *_textInputQuickCoalescer;
    RTTConversation *_conversation;
    CDUnknownBlockType _rttConversationAvailabilityCallback;
    DDParsecCollectionViewController *_lookupController;
    UITableView *_tableView;
    RTTUtterance *_currentUtterance;
    TUCall *_call;
}

+ (_Bool)_validRectangle:(struct CGRect)arg1;
+ (id)viewControllerForConversation:(id)arg1;
+ (id)viewControllerForCall:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(retain, nonatomic) RTTUtterance *currentUtterance; // @synthesize currentUtterance=_currentUtterance;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DDParsecCollectionViewController *lookupController; // @synthesize lookupController=_lookupController;
@property(copy, nonatomic) CDUnknownBlockType rttConversationAvailabilityCallback; // @synthesize rttConversationAvailabilityCallback=_rttConversationAvailabilityCallback;
@property(retain, nonatomic) RTTConversation *conversation; // @synthesize conversation=_conversation;
- (void)_define:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)utteranceIsSelected;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (void)_updateTableViewRowsAtIndexPaths:(id)arg1 action:(long long)arg2 animation:(long long)arg3;
- (void)_updateTableViewRowAtIndexPath:(id)arg1 action:(long long)arg2 animation:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateViewForKeyboard:(id)arg1;
- (void)shareCallInfo:(id)arg1;
- (void)setupTableView;
- (void)updateTableViewSizeAnimated:(_Bool)arg1;
- (void)updateGAButton;
- (void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2;
- (void)_processRealtimeTimeout;
- (void)realtimeTextDidChange;
- (id)lastCellRowPathForUtterance:(id)arg1;
- (id)lastConversationRowPathForUtterance:(id)arg1;
- (void)gaButtonPressed:(id)arg1;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (void)updateVoiceOverAnnouncement:(id)arg1;
- (id)currentContactPath;
- (id)cannedResponses;
- (id)serviceUpdateCellAtIndexPath:(id)arg1;
- (id)utteranceCellAtIndexPath:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (id)textViewUtterance;
- (void)updateUtterance:(id)arg1 forIndexPath:(id)arg2;
- (id)addUtterance:(id)arg1;
- (void)_replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3;
- (void)replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3;
- (void)_removeServiceCellWithUpdate:(id)arg1;
- (void)removeServiceCellWithUpdate:(id)arg1;
- (void)_addServiceCellWithUpdate:(id)arg1 options:(id)arg2;
- (void)addServiceCellWithUpdate:(id)arg1 options:(id)arg2;
- (void)updateInputEnabled;
- (_Bool)currentCallIsDowngraded;
- (_Bool)currentCallIsOnHold;
- (id)currentCall;
- (id)contactDisplayString;
- (void)toggleMute:(id)arg1;
- (void)updateBarButtons;
- (void)_updateMuteButtonState;
- (void)showCallEnded;
- (void)updateCallHold:(id)arg1;
- (void)callDidConnect:(id)arg1;
- (void)updateCallDowngradeStatus;
- (void)updateCallActiveStatus:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)inputTextView;
- (id)init;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

