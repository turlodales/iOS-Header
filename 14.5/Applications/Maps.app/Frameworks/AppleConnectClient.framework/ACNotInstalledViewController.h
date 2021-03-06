//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleConnectClient/ACMobileFallbackViewController.h>

@class NSURL, UIBarButtonItem, UIButton, UILabel;
@protocol ACExecutionEnvironment;

__attribute__((visibility("hidden")))
@interface ACNotInstalledViewController : ACMobileFallbackViewController
{
    _Bool _acceptanceTest;
    NSURL *_switchboardURL;
    NSURL *_enrollmentURL;
    id <ACExecutionEnvironment> _executionEnvironment;
    UIBarButtonItem *_cancelButton;
    UILabel *_instructions;
    UILabel *_notInstalledMessage;
    UIButton *_actionButton;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property UILabel *notInstalledMessage; // @synthesize notInstalledMessage=_notInstalledMessage;
@property UILabel *instructions; // @synthesize instructions=_instructions;
@property _Bool acceptanceTest; // @synthesize acceptanceTest=_acceptanceTest;
@property UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) id <ACExecutionEnvironment> executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
- (void)callCompletion;
- (void)hideCancelButton:(_Bool)arg1;
- (void)onCancel:(id)arg1;
- (void)onDownloadNow:(id)arg1;
- (void)updateWithEnrollmentInstructions;
- (void)updateWithSwitchboardInstructions;
@property(readonly) NSURL *enrollmentURL; // @synthesize enrollmentURL=_enrollmentURL;
@property(readonly) NSURL *switchboardURL; // @synthesize switchboardURL=_switchboardURL;
@property(readonly) _Bool isSwitchboardAvailable;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

