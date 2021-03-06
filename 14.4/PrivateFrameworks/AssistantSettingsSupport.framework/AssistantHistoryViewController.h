//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;
@protocol AssistantHistoryDelegate;

@interface AssistantHistoryViewController : PSListController
{
    AFSettingsConnection *_settingsConnection;
    PSDeleteButtonCell *_deleteButtonCell;
    UIActivityIndicatorView *_indicatorView;
    id <AssistantHistoryDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AssistantHistoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentPrivacySheet;
- (id)_deletionResponseAlertForFailure;
- (void)_presentErrorAlert;
- (void)_endIndicatorViewSpinning;
- (void)_animateSpinnerIn;
- (void)_startIndicatorViewSpinning;
- (void)_deleteSiriHistory;
- (void)_handleDeleteSiriHistoryButtonPress;
- (long long)_getDataSharingOptInStatus;
- (id)specifiers;
- (id)init;

@end

