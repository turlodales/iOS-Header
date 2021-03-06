//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStyle, NSArray, UIColor, UIImage, _UIBackdropViewSettings;

@interface CKUITheme : NSObject
{
    long long _HUDStyle;
    UIColor *_darkAppTintColor;
    long long _businessStatusBarStyle;
    UIColor *_spotlightSearchBarBackgroundColor;
    UIColor *_transcriptNavBarTextColor;
    UIColor *_editableViewUncheckedSymbol;
    UIColor *_searchResultsSeperatorColor;
    UIColor *_detailsCellStaticTextColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *detailsCellStaticTextColor; // @synthesize detailsCellStaticTextColor=_detailsCellStaticTextColor;
@property(readonly, nonatomic) UIColor *searchResultsSeperatorColor; // @synthesize searchResultsSeperatorColor=_searchResultsSeperatorColor;
@property(readonly, nonatomic) UIColor *editableViewUncheckedSymbol; // @synthesize editableViewUncheckedSymbol=_editableViewUncheckedSymbol;
@property(readonly, nonatomic) UIColor *transcriptNavBarTextColor; // @synthesize transcriptNavBarTextColor=_transcriptNavBarTextColor;
@property(readonly, nonatomic) UIColor *spotlightSearchBarBackgroundColor; // @synthesize spotlightSearchBarBackgroundColor=_spotlightSearchBarBackgroundColor;
@property(readonly, nonatomic) long long businessStatusBarStyle; // @synthesize businessStatusBarStyle=_businessStatusBarStyle;
@property(readonly, nonatomic) UIColor *darkAppTintColor; // @synthesize darkAppTintColor=_darkAppTintColor;
@property(nonatomic) long long HUDStyle; // @synthesize HUDStyle=_HUDStyle;
@property(readonly, nonatomic) UIColor *carplayDateLabelFocusColor;
@property(readonly, nonatomic) UIColor *carplayDateLabelColor;
@property(readonly, nonatomic) UIColor *carplayRecipientLabelFocusColor;
@property(readonly, nonatomic) UIColor *carplayRecipientLabelColor;
@property(readonly, nonatomic) UIColor *carplayUnreadImageColor_Highlighted_Dark;
@property(readonly, nonatomic) UIColor *carplayUnreadImageColor_Dark;
@property(readonly, nonatomic) UIColor *carplayUnreadImageColor_Highlighted_Light;
@property(readonly, nonatomic) UIColor *carplayUnreadImageColor_Light;
@property(readonly, nonatomic) UIColor *carplayNavBarComposeButtonFocusColor_Highlight;
@property(readonly, nonatomic) UIColor *carplayNavBarComposeButtonColor_Highlight;
@property(readonly, nonatomic) UIColor *carplayNavBarComposeButtonFocusColor;
@property(readonly, nonatomic) UIColor *carplayNavBarComposeButtonColor;
@property(readonly, nonatomic) UIColor *syncProgressActionButtonDisabledColor;
@property(readonly, nonatomic) UIColor *syncProgressIndeterminateProgressBarTintColor;
@property(readonly, nonatomic) UIColor *syncProgressUserActionButtonTextColor;
@property(readonly, nonatomic) UIColor *syncProgressUserMessageColor;
@property(readonly, nonatomic) UIColor *syncProgressLabelColor;
@property(readonly, nonatomic) UIColor *callButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *dividerViewBackgroundColor;
@property(readonly, nonatomic) UIColor *nicknameViewBackgroundColor;
- (id)secondaryBrandColorForBusinessHandle:(id)arg1;
- (id)primaryBrandColorForBusinessHandle:(id)arg1;
- (long long)_businessNavBarTextStyleForColor:(id)arg1;
- (long long)navBarTextStyleForBusinessHandle:(id)arg1;
- (long long)navBarTextStyleForBusinessChat:(id)arg1;
- (long long)_businessStatusBarStyleForNavStyle:(long long)arg1;
- (long long)statusBarStyleForBusinessHandle:(id)arg1;
- (long long)statusBarStyleForBusinessChat:(id)arg1;
- (id)secondaryBrandColorForBusinessChat:(id)arg1;
- (id)primaryBrandColorForBusinessChat:(id)arg1;
@property(readonly, nonatomic) UIColor *businessInfoViewDescriptionTextColor;
@property(readonly, nonatomic) UIColor *businessInfoViewGreetingTextColor;
@property(readonly, nonatomic) UIColor *businessDescriptionViewControllerBackgroundColor;
@property(readonly, nonatomic) UIColor *fsmPickerDotColor;
@property(readonly, nonatomic) UIColor *fsmPickerBackgroundViewColor;
@property(readonly, nonatomic) UIColor *fsmPickerBlueLayerBackgroundColor;
@property(readonly, nonatomic) UIColor *macEffectPickerCloseButtonTintColor;
@property(readonly, nonatomic) UIColor *fsmPickerRoundedViewColor;
@property(readonly, nonatomic) UIColor *fsmPickerBackgroundColor;
@property(readonly, nonatomic) UIColor *fsmPickerSendButtonColor;
@property(readonly, nonatomic) UIColor *fsmPickerCloseButtonColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerCloseButtonColor;
@property(readonly, nonatomic) UIColor *fsmPickerCurrentPageIndicatorColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerCurrentPageIndicatorColor;
@property(readonly, nonatomic) UIColor *fsmPickerPageIndicatorColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerPageIndicatorColor;
@property(readonly, nonatomic) UIColor *fsmPickerSecondaryColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerSecondaryColor;
@property(readonly, nonatomic) UIColor *fsmPickerPrimaryTintColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerPrimaryTintColor;
@property(readonly, nonatomic) UIColor *fsmPickerPrimaryColorDarkEffect;
@property(readonly, nonatomic) UIColor *fsmPickerPrimaryColor;
@property(readonly, nonatomic) UIColor *stickerPeelBackgroundColor;
@property(readonly, nonatomic) UIColor *stickerDetailsSubheaderTextColor;
@property(readonly, nonatomic) UIColor *paddleShadow;
@property(readonly, nonatomic) UIColor *paddleInnerGlow;
@property(readonly, nonatomic) UIColor *paddleOuterGlow;
@property(readonly, nonatomic) UIColor *paddleShadowColor;
@property(readonly, nonatomic) UIColor *paddleSeparatorColor;
@property(readonly, nonatomic) UIColor *paddleSelectionColor;
@property(readonly, nonatomic) UIColor *paddleNameColor;
@property(readonly, nonatomic) UIImage *appSelectionOutline;
@property(readonly, nonatomic) UIImage *appGrabberCloseImage;
@property(readonly, nonatomic) UIColor *fullscreenAppDismissViewColor;
@property(readonly, nonatomic) UIColor *appSelectionOutlineColor;
@property(readonly, nonatomic) UIColor *appGrabberPillColor;
@property(readonly, nonatomic) UIColor *appGrabberTitleColor;
@property(readonly, nonatomic) UIColor *appGrabberBackgroundColor;
@property(readonly, nonatomic) double browserAppStripLightPluginCellOpacity;
@property(readonly, nonatomic) double browserAppStripDimmedPluginCellOpacity;
@property(readonly, nonatomic) UIColor *browserAppStripSeperatorBackgroundColor;
@property(readonly, nonatomic) UIColor *browserCloseButtonColor;
@property(readonly, nonatomic) UIColor *browserSwitcherBorderColor;
@property(readonly, nonatomic) UIColor *browserSwitcherGutterDividerColor;
@property(readonly, nonatomic) UIColor *browserSwitcherGutterColor;
@property(readonly, nonatomic) UIColor *browserBackgroundColor;
- (id)messageAcknowledgmentSelectedBalloonColorForStyle:(long long)arg1;
- (id)messageAcknowledgmentBalloonColorForStyle:(long long)arg1;
- (BOOL)messageAcknowledgmentBalloonColorTypeForStyle:(long long)arg1;
- (id)messageAcknowledgment:(long long)arg1 selectedAcknowledgmentImageColor:(long long)arg2;
- (id)messageAcknowledgment:(long long)arg1 acknowledgmentImageColor:(long long)arg2;
- (BOOL)ckAcknowledgemntColorTypeForColor:(id)arg1;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentVotingTextColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentBlackColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentWhiteColor;
- (id)messageAcknowledgmentContrastColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentGrayColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentRedColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentBalloonBorderColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentPickerBackgroundColor;
@property(readonly, nonatomic) UIColor *activeRecordingDotColor;
@property(readonly, nonatomic) UIColor *detailsAddButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsAttachmentsDecorationViewBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsHeaderFooterContentViewBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsCollectionViewBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsGroupPhotoBackgroundColor;
@property(readonly, nonatomic) double contactTableViewContactBackgroundAlpha;
@property(readonly, nonatomic) UIColor *contactsActionButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *contactsActionButtonColor;
@property(readonly, nonatomic) UIColor *contactTableViewCellContentTextColor;
@property(readonly, nonatomic) UIColor *contactTableViewHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *contactTableViewCellBackgroundColor;
@property(readonly, nonatomic) UIColor *contactsTableViewBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsSegmentedControlBackgroundColor;
@property(readonly, nonatomic) UIColor *sharedContentsCellBackgroundColor;
@property(readonly, nonatomic) UIColor *sharedContentsCellTextColor;
@property(readonly, nonatomic) UIColor *detailsTextColor;
@property(readonly, nonatomic) UIColor *detailsSelectedCellColor;
@property(readonly, nonatomic) UIColor *contactCellTextColor;
@property(readonly, nonatomic) UIColor *recipientsDividerColor;
@property(readonly, nonatomic) long long detailsBackgroundBlurEffectStyle;
@property(readonly, nonatomic) UIColor *detailsBackgroundColor;
@property(readonly, nonatomic) UIColor *entryViewBackgroundColor;
@property(readonly, nonatomic) UIColor *appStripCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldUnconfirmedMentionColor;
@property(readonly, nonatomic) UIColor *entryFieldConfirmedMentionColor;
@property(readonly, nonatomic) UIColor *entryFieldAudioRecordingBalloonColor;
@property(readonly, nonatomic) UIColor *entryFieldLinkColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkTextColor;
@property(readonly, nonatomic) UIColor *entryFieldPlaceholderTextColor;
@property(readonly, nonatomic) UIColor *entryFieldTextColor;
@property(readonly, nonatomic) UIColor *entryFieldPlaceholderColor;
@property(readonly, nonatomic) UIColor *entryFieldDividerColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillDarkColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverBorderColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldGrayColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkStyleHighlightedButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkEffectButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldHighlightedButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldButtonColor;
- (BOOL)applyPayCashSendButtonColorForEntryViewStyle:(long long)arg1;
- (id)reply_blue_sendButtonColor;
- (id)reply_gray_sendButtonColor;
- (id)background_sendButtonColor;
- (id)multiway_sendButtonColor;
- (id)business_sendButtonColor;
- (id)black_sendButtonColor;
- (id)white_sendButtonColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewTransparentBackdropSettings;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewDarkBackdropSettings;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewBackdropSettings;
@property(readonly, nonatomic) long long keyboardDarkAppearance;
@property(readonly, nonatomic) long long keyboardAppearance;
@property(readonly, nonatomic) long long entryViewDarkStyle;
@property(readonly, nonatomic) long long entryViewStyle;
@property(readonly, nonatomic) UIColor *searchResultsBackgroundColor;
@property(readonly, nonatomic) long long toFieldBackdropStyle;
- (id)recipientTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *meMentionTextColor;
@property(readonly, nonatomic) UIColor *waveformDisabledColor;
@property(readonly, nonatomic) UIColor *waveformUnplayedColor;
- (id)reply_blue_progressViewColor;
- (id)reply_gray_progressViewColor;
- (id)background_progressViewColor;
- (id)multiway_progressViewColor;
- (id)business_progressViewColor;
- (id)black_progressViewColor;
- (id)white_progressViewColor;
- (id)red_progressViewColor;
- (id)siri_progressViewColor;
- (id)blue_progressViewColor;
- (id)green_progressViewColor;
- (id)gray_progressViewColor;
- (id)progressViewColorForColorType:(BOOL)arg1;
- (id)reply_blue_waveformColor;
- (id)reply_gray_waveformColor;
- (id)background_waveformColor;
- (id)multiway_waveformColor;
- (id)business_waveformColor;
- (id)black_waveformColor;
- (id)white_waveformColor;
- (id)red_waveformColor;
- (id)siri_waveformColor;
- (id)blue_waveformColor;
- (id)green_waveformColor;
- (id)gray_waveformColor;
- (id)waveformColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *attachmentBalloonRichIconOutlineColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonSubtitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonTitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonActionColor;
@property(readonly, nonatomic) UIColor *replyButtonShadowColor;
@property(readonly, nonatomic) UIColor *replyButtonBorderColor;
@property(readonly, nonatomic) UIColor *replyButtonColor;
@property(readonly, nonatomic) UIColor *replyButtonTextColor;
@property(readonly, nonatomic) NSArray *replyTranscriptBlurBackgroundEffects;
@property(readonly, nonatomic) UIColor *replyTranscriptBlurBackgroundColor;
- (id)reply_blue_balloonOverlayColor;
- (id)reply_gray_balloonOverlayColor;
- (id)background_balloonOverlayColor;
- (id)multiway_balloonOverlayColor;
- (id)business_balloonOverlayColor;
- (id)black_balloonOverlayColor;
- (id)white_balloonOverlayColor;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)reply_blue_balloonTextLinkColor;
- (id)reply_gray_balloonTextLinkColor;
- (id)background_balloonTextLinkColor;
- (id)multiway_balloonTextLinkColor;
- (id)business_balloonTextLinkColor;
- (id)black_balloonTextLinkColor;
- (id)white_balloonTextLinkColor;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)reply_blue_balloonTextColor;
- (id)reply_gray_balloonTextColor;
- (id)background_balloonTextColor;
- (id)multiway_balloonTextColor;
- (id)business_balloonTextColor;
- (id)black_balloonTextColor;
- (id)white_balloonTextColor;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)balloonTextColorInPrintingPathForColorType:(BOOL)arg1;
- (id)reply_blue_unfilledBalloonColor;
- (id)reply_gray_unfilledBalloonColor;
- (id)background_unfilledBalloonColor;
- (id)multiway_unfilledBalloonColor;
- (id)business_unfilledBalloonColor;
- (id)black_unfilledBalloonColor;
- (id)white_unfilledBalloonColor;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *jellyfishMuteButtonColor;
@property(readonly, nonatomic) UIColor *multiwayButtonColor;
@property(readonly, nonatomic) UIColor *multiwayCaptionTextColor;
@property(readonly, nonatomic) UIColor *multiwayBalloonBackgroundColor;
@property(readonly, nonatomic) UIColor *autoloopMuteButtonColor;
@property(readonly, nonatomic) UIColor *typingIndicatorDotColor;
- (id)reply_blue_balloonColors;
- (id)reply_gray_balloonColors;
- (id)background_balloonColors;
- (id)multiway_balloonColors;
- (id)business_balloonColors;
- (id)black_balloonColors;
- (id)white_balloonColors;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *statusTextColor;
@property(readonly, nonatomic) UIColor *replyLineColor;
@property(readonly, nonatomic) long long transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) UIColor *transcriptDeemphasizedTextColor;
@property(readonly, nonatomic) UIColor *transcriptBigEmojiColor;
@property(readonly, nonatomic) UIColor *transcriptNicknameTextColor;
- (id)_transcriptTextColor;
- (id)_transcriptBackgroundColor;
@property(readonly, nonatomic) UIColor *transcriptBreadcrumpTextColor;
@property(readonly, nonatomic) UIColor *transcriptTextColor;
@property(readonly, nonatomic) UIColor *transcriptBackgroundColor;
@property(readonly, nonatomic) UIColor *navBarGrayColor;
@property(readonly, nonatomic) UIColor *iosMacDetailsCellColor;
@property(readonly, nonatomic) UIColor *iosMacDetailsButtonColor;
@property(readonly, nonatomic) UIColor *progressBarTrackTintColor;
@property(readonly, nonatomic) UIColor *transcriptSeparatorColor;
@property(readonly, nonatomic) UIColor *spotlightSearchSegmentedControlBackgroundColor;
@property(readonly, nonatomic) UIColor *spotlightAttachmentSecondaryColor;
@property(readonly, nonatomic) UIColor *spotlightSearchCellHairlineColor;
@property(readonly, nonatomic) UIColor *spotlightSearchTitleLabelColor;
@property(readonly, nonatomic) UIColor *spotlightSearchCellLabelColor;
@property(readonly, nonatomic) UIColor *spotlightSearchBackgroundColor;
@property(readonly, nonatomic) UIColor *conversationListPinnedAdHocConversationRadiantShadowColor;
@property(readonly, nonatomic) UIColor *conversationListPinnedConversationNameSelectedColor;
@property(readonly, nonatomic) UIColor *conversationListPinnedConversationNameColor;
@property(readonly, nonatomic) UIColor *conversationListPinningOnboardingSubtitleColor;
@property(readonly, nonatomic) UIColor *conversationListPinningOnboardingTitleColor;
@property(readonly, nonatomic) UIColor *conversationListPinnedCellSelectorViewColor;
@property(readonly, nonatomic) UIColor *conversationListGroupCountColor;
@property(readonly, nonatomic) UIColor *conversationListLargeTextDateColor;
@property(readonly, nonatomic) UIColor *conversationListDateColor;
@property(readonly, nonatomic) UIColor *conversationListEditingPinsSummaryColor;
@property(readonly, nonatomic) UIColor *conversationListSummaryColor;
@property(readonly, nonatomic) UIColor *conversationListSelectedCellColor;
@property(readonly, nonatomic) UIColor *conversationListCellColor;
@property(readonly, nonatomic) UIColor *conversationListCellSelectedDateColor;
@property(readonly, nonatomic) UIColor *conversationListCellSelectedSummaryColor;
@property(readonly, nonatomic) UIColor *conversationListCellSelectedTextColor;
@property(readonly, nonatomic) UIColor *readSelectedIndicatorColor;
@property(readonly, nonatomic) UIColor *readIndicatorColor;
@property(readonly, nonatomic) UIColor *unreadIndicatorColor;
@property(readonly, nonatomic) UIColor *conversationListSenderColor;
@property(readonly, nonatomic) UIColor *conversationListChevronColor;
@property(readonly, nonatomic) UIColor *conversationListCollectionViewBackgroundColor;
@property(readonly, nonatomic) UIColor *conversationListBackgroundColor;
@property(readonly, nonatomic) UIColor *secondaryLabelColor;
@property(readonly, nonatomic) UIColor *primaryLabelColor;
@property(readonly, nonatomic) CNContactStyle *contactStyle;
@property(readonly, nonatomic) long long scrollIndicatorStyle;
@property(readonly, nonatomic) UIColor *appManagerSectionHeaderTextColor;
@property(readonly, nonatomic) long long appManagerStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) long long defaultBarStyle;
@property(readonly, nonatomic) long long navBarStyle;
- (_Bool)shouldOverlayAppBorderImage;
@property(readonly, nonatomic) UIColor *notificationSubtitleColor;
@property(readonly, nonatomic) UIColor *grayTextColor;
@property(readonly, nonatomic) UIColor *lightGrayColor;
@property(readonly, nonatomic) UIColor *messagesControllerBackgroundColor;
@property(readonly, nonatomic) UIColor *segmentedControlSelectionTintColor;
@property(readonly, nonatomic) UIColor *appTintColor;

@end

