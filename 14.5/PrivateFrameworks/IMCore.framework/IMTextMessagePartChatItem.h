//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem
{
    NSAttributedString *_subject;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(_Bool)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)replyContextPreviewChatItemForReply:(id)arg1;
- (void)setShouldDisplayRichLink:(_Bool)arg1;
- (_Bool)shouldDisplayRichLink;

@end

