//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SafariServices/ASAccountAuthenticationModificationControllerDelegate-Protocol.h>
#import <SafariServices/ASAccountAuthenticationModificationControllerPresentationContextProviding-Protocol.h>
#import <SafariServices/PSStateRestoration-Protocol.h>
#import <SafariServices/UITextFieldDelegate-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationExtensionManagerObserver-Protocol.h>
#import <SafariServices/_SFTableViewDiffableDataSourceDelegate-Protocol.h>

@class ASAccountAuthenticationModificationController, NSExtension, NSObject, NSString, SFEditableTableViewCell, SFSafariViewController, SFSecurityRecommendationInfoCell, UIBarButtonItem, UITableViewCell, WBSPasswordWarning, WBSSavedPassword, _SFTableViewDiffableDataSource;
@protocol OS_dispatch_queue, SFPasswordDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFPasswordDetailViewController : UITableViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, UITextFieldDelegate, _SFTableViewDiffableDataSourceDelegate, PSStateRestoration>
{
    WBSSavedPassword *_savedPassword;
    unsigned long long _options;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    NSString *_userForEditing;
    NSString *_passwordForEditing;
    UITableViewCell *_changePasswordOnWebsiteCell;
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    SFSecurityRecommendationInfoCell *_securityRecommendationInfoCell;
    WBSPasswordWarning *_passwordWarning;
    SFSafariViewController *_changePasswordSafariViewController;
    UITableViewCell *_upgradeToSignInWithAppleCell;
    UITableViewCell *_changeToStrongPasswordCell;
    NSString *_rulesForStrongPasswordChange;
    NSExtension *_accountModificationExtension;
    _Bool _eligibleToChangeToStrongPassword;
    _Bool _eligibleToUpgradeToSignInWithApple;
    _Bool _completedUpgradeToStrongPassword;
    _Bool _completedUpgradeToSignInWithApple;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
    _Bool _didShowAccountOptionsHeaderText;
    long long _accountUpgradeOriginType;
    _Bool _showsChangePasswordControllerOnAppearance;
    id <SFPasswordDetailViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsChangePasswordControllerOnAppearance; // @synthesize showsChangePasswordControllerOnAppearance=_showsChangePasswordControllerOnAppearance;
@property(nonatomic) __weak id <SFPasswordDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldShowAccountOptionsHeader;
- (void)_showConfirmationToDeletePassword;
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1;
- (void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3;
- (void)_completedStrongPasswordUpgrade;
- (void)_completedSignInWithAppleUpgrade;
- (void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3;
- (void)_initiateChangeToStrongPassword;
- (void)_initiateUpgradeToSignInWithApple;
- (void)_updateAccountModificationOptions;
- (_Bool)_completedUpgrade;
- (_Bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;
- (id)dataSource:(id)arg1 footerTextForSection:(long long)arg2;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (void)_sharePasswordWithPopoverPresentationControllerConfiguration:(CDUnknownBlockType)arg1;
- (void)safari_sharePassword:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_updateWarningForSavedPassword;
- (id)_warningTitleForPassword;
- (void)_savePasswordAndFinishEditing;
- (long long)_itemTypeForIdentifier:(id)arg1;
- (long long)_sectionTypeForSection:(long long)arg1;
- (id)_lastModifiedDateString;
- (void)_updateMenuItems;
- (void)safari_copyPassword:(id)arg1;
- (void)safari_copyUserName:(id)arg1;
- (void)_willHideUIMenuController:(id)arg1;
- (void)_textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)_deletePasswordCellForTableView:(id)arg1;
- (id)_savedPasswordWebsiteCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4 secureEntry:(_Bool)arg5;
- (void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1;
- (void)_configurePasswordCell:(id)arg1;
- (void)_configureUserCell:(id)arg1;
- (id)_editableCellWithCell:(id)arg1;
- (id)_subtitleStringForStrongPasswordUpgrade;
- (id)_subtitleStringForSignInWithAppleUpgrade;
- (id)_securityRecommendationSubtitleString;
- (void)_configureSecurityRecommendationInfoCell;
- (void)_addAccountUpgradeItemsForSectionType:(long long)arg1 toSnapshot:(id)arg2;
- (void)_reloadDiffableDataSourceAnimated:(_Bool)arg1;
- (void)_reloadDiffableDataSourceOnInternalQueueAnimated:(_Bool)arg1;
- (id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2;
- (void)dealloc;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_shareBarButtonItemTapped:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)_editBarButtonItemTapped:(id)arg1;
- (void)_openChangePasswordURLInWebBrowser;
- (void)_showChangePasswordSafariViewController;
- (id)_changePasswordURL;
- (void)_passwordStoreDidUpdate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_passwordGenerator;
- (id)_passwordEvaluator;
- (id)_passwordAuditor;
- (id)_passwordWarningManager;
- (_Bool)_allowAuditing;
- (_Bool)_allowEditing;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithSavedPassword:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

