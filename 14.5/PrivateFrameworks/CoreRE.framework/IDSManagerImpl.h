//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRE/IDSServiceDelegatePrivate-Protocol.h>

@class IDSService, NSString;

__attribute__((visibility("hidden")))
@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate>
{
    Event_b92446be m_receivedInvite;
    Event_8f7d30d6 m_acceptedInvite;
    Event_8f7d30d6 m_rejectedInvite;
    struct DynamicArray<re::IDSInvite *> m_invites;
    struct DynamicArray<re::IDSDiscoveryView *> m_views;
    _Bool _isListeningForInvites;
    IDSService *_service;
    struct Config {
        struct ServiceLocator *serviceLocator;
        struct queue dispatchQueue;
        struct DynamicString serviceID;
    } _config;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isListeningForInvites; // @synthesize isListeningForInvites=_isListeningForInvites;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) Config_8ed34026 config; // @synthesize config=_config;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (_Bool)parseMessage:(id)arg1 payload:(id *)arg2 objectGUID:(id *)arg3 type:(id *)arg4;
- (void)sendMessage:(id)arg1 type:(id)arg2 objectGUID:(id)arg3 to:(id)arg4;
- (void)incomingInviteRequest:(id)arg1 payload:(id)arg2 from:(id)arg3;
- (struct IDSSessionService *)idsSessionService;
- (SharedPtr_d68dfbcb)createInviteWithDiscoveryView:(SharedPtr_c2d37bbb)arg1 destinations:(Slice_554aef03)arg2;
- (SharedPtr_d68dfbcb)createInviteWithDestinations:(Slice_554aef03)arg1;
- (void)sendInviteRequest:(struct IDSInvite *)arg1 destinations:(id)arg2;
- (id)discoveryViewToNSArray:(struct DiscoveryView *)arg1 to:(id)arg2;
- (SharedPtr_24b37889)createDiscoveryViewWithDestinations:(id)arg1 destinations:(id)arg2;
- (SharedPtr_601ce9e9)createLocalIdentity;
- (void)willDestroyDiscoveryView:(struct IDSDiscoveryView *)arg1;
- (void)willDestroyInvite:(struct IDSInvite *)arg1;
- (struct IDSDiscoveryView *)discoveryViewWithGuid:(id)arg1;
- (void)incomingViewMessage:(struct IDSDiscoveryView *)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)acceptInvite:(struct IDSInvite *)arg1;
- (void)incomingInviteMessage:(struct IDSInvite *)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)inviteAcceptedFrom:(struct IDSInvite *)arg1 from:(id)arg2;
- (void)broadcastViewUpdate:(struct IDSDiscoveryView *)arg1;
- (_Bool)isValidInviteResponse:(id)arg1 message:(id)arg2;
- (_Bool)isValidViewUpdate:(id)arg1 message:(id)arg2;
- (_Bool)isValidDestinationsArray:(id)arg1;
- (struct IDSInvite *)inviteWithGuid:(id)arg1;
- (_Bool)isLoggedIn;
- (void)stopListeningForInvites;
- (void)startListeningForInvites;
- (Event_8f7d30d6 *)rejectedInviteEvent;
- (Event_8f7d30d6 *)acceptedInviteEvent;
- (Event_b92446be *)receivedInviteEvent;
- (void)dealloc;
- (void)setupService;
- (id)initWithConfig:(struct Config)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

