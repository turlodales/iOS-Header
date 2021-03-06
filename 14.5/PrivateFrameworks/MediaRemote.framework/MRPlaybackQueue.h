//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRPlayerPath, NSArray, NSData, NSDictionary, NSString, _MRPlaybackQueueContextProtobuf;

@interface MRPlaybackQueue : NSObject <NSCopying>
{
    _Bool _hasLocation;
    _Bool _sendingPlaybackQueueTransaction;
    _Bool _hasSendingPlaybackQueueTransaction;
    long long _location;
    NSString *_requestIdentifier;
    NSString *_queueIdentifier;
    NSArray *_contentItems;
    MRPlayerPath *_resolvedPlayerPath;
    _MRPlaybackQueueContextProtobuf *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) _Bool hasSendingPlaybackQueueTransaction; // @synthesize hasSendingPlaybackQueueTransaction=_hasSendingPlaybackQueueTransaction;
@property(nonatomic) _Bool sendingPlaybackQueueTransaction; // @synthesize sendingPlaybackQueueTransaction=_sendingPlaybackQueueTransaction;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) long long location; // @synthesize location=_location;
- (void)mergeFrom:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (id)contentItemWithOffset:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *minimalReadableDescription;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, copy, nonatomic) NSArray *contentItemIdentifiers;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)initWithContentItems:(id)arg1 location:(unsigned long long)arg2;
- (id)initWithContentItem:(id)arg1;
- (id)initWithContentItems:(id)arg1;

@end

