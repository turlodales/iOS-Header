//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSArray, NSString;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem
{
    _Bool _wantsTranscriptGroupMonograms;
    _Bool _wantsOutline;
    _Bool _isAppearing;
    _Bool _isHandwriting;
    _Bool _isBusiness;
    IMTranscriptPluginChatItem *_imTranscriptPluginChatItem;
    NSString *_conversationID;
    NSArray *_recipients;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBusiness; // @synthesize isBusiness=_isBusiness;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) _Bool isHandwriting; // @synthesize isHandwriting=_isHandwriting;
@property(retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem; // @synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(readonly, nonatomic) _Bool wantsOutline; // @synthesize wantsOutline=_wantsOutline;
@property(readonly, nonatomic) _Bool wantsTranscriptGroupMonograms; // @synthesize wantsTranscriptGroupMonograms=_wantsTranscriptGroupMonograms;
- (void)performHostAppResumeWithContext:(id)arg1;
- (void)releaseBalloonControllerIfNeededForContext:(id)arg1;
- (void)relinquishBalloonControllerForContext:(id)arg1;
@property(readonly, nonatomic) _Bool isSaved;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool wantsBalloonGradient;
- (id)dragItemProvider;
- (struct UIEdgeInsets)contentInsets;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (struct UIEdgeInsets)textAlignmentInsets;
- (_Bool)shouldSnapshot;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contact;
- (id)sender;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange)arg2;
- (id)pluginDisplayContainerForContext:(id)arg1;
- (id)message;
- (id)menuTitle;
- (_Bool)canInlineReply;
- (_Bool)canForward;
- (_Bool)canCopy;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
- (void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(_Bool)arg4;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3 context:(id)arg4;
- (id)balloonControllerForContext:(id)arg1;
- (id)contentViewControllerForContext:(id)arg1;
- (id)extensibleViewControllerForContext:(id)arg1;
- (id)extensibleViewForContext:(id)arg1;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2;
- (id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2;
- (unsigned long long)layoutType;
- (id)compositionWithContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem; // @dynamic IMChatItem;

@end

