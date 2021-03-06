//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECIMAPServerMessageBuilder-Protocol.h>
#import <EmailCore/ECServerMessageBuilder-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>

@class ECMessageFlags, NSNumber, NSSet, NSString;

@interface ECServerMessage : NSObject <ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying>
{
    NSNumber *_imapUID;
    NSString *_persistentID;
    NSString *_messagePersistentID;
    ECMessageFlags *_serverFlags;
    NSString *_remoteID;
    NSSet *_labels;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
@property(retain, nonatomic) ECMessageFlags *serverFlags; // @synthesize serverFlags=_serverFlags;
@property(retain, nonatomic) NSString *messagePersistentID; // @synthesize messagePersistentID=_messagePersistentID;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) id remoteIDObject;
- (void)setImapUID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int imapUID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIMAPServerMessageBuilder:(CDUnknownBlockType)arg1;
- (id)initWithServerMessageBuilder:(CDUnknownBlockType)arg1;

@end

