//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessageStatusChatItem.h>

#import <IMCore/IMReplyContext-Protocol.h>

@class IMItem, NSString;

@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext>
{
    _Bool _replyIsFromMe;
    IMItem *_parentItem;
    NSString *_threadIdentifier;
    NSString *_replyMessageGUID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *replyMessageGUID; // @synthesize replyMessageGUID=_replyMessageGUID;
@property(readonly, nonatomic) _Bool replyIsFromMe; // @synthesize replyIsFromMe=_replyIsFromMe;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(retain, nonatomic) IMItem *_parentItem; // @synthesize _parentItem;
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 threadIdentifier:(id)arg3 replyMessageGUID:(id)arg4 replyIsFromMe:(_Bool)arg5 count:(unsigned long long)arg6;

@end

