//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactInlineActionsViewControllerDelegate-Protocol.h>

@class CNContactInlineActionsViewController, CNContactProperty, NSString, UIImage;

@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>

@optional
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideEnabledStateForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldOverrideEnabledStateForActionOfType:(NSString *)arg2;
- (NSString *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideTitleForActionOfType:(NSString *)arg2;
- (UIImage *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideImageForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 canPerformGroupActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 didSelectActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPresentDisambiguationUIForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPerformActionOfType:(NSString *)arg2 withContactProperty:(CNContactProperty *)arg3;
@end

