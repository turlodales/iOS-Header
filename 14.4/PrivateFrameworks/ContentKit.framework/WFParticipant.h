//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSPredicate, NSString, NSURL;

@interface WFParticipant : NSObject <WFNaming, WFSerializableContent>
{
    _Bool _managed;
    _Bool _currentUser;
    NSURL *_URL;
    NSString *_name;
    NSString *_emailAddress;
    long long _status;
    long long _role;
    long long _type;
    NSString *_sourceIdentifier;
    NSPredicate *_contactPredicate;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSPredicate *contactPredicate; // @synthesize contactPredicate=_contactPredicate;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic, getter=isManaged) _Bool managed; // @synthesize managed=_managed;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEKParticipant:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 status:(long long)arg4 role:(long long)arg5 type:(long long)arg6 sourceIdentifier:(id)arg7 isManaged:(_Bool)arg8 isCurrentUser:(_Bool)arg9 contactPredicate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

