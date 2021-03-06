//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;
@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject
{
    struct AugmentableInspectorController *_controller;
    id <RWIProtocolCSSDomainHandler> _cssHandler;
    RWIProtocolCSSDomainEventDispatcher *_cssEventDispatcher;
    RWIProtocolConsoleDomainEventDispatcher *_consoleEventDispatcher;
    id <RWIProtocolDOMDomainHandler> _domHandler;
    RWIProtocolDOMDomainEventDispatcher *_domEventDispatcher;
    id <RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
    RWIProtocolDOMStorageDomainEventDispatcher *_domStorageEventDispatcher;
    id <RWIProtocolNetworkDomainHandler> _networkHandler;
    RWIProtocolNetworkDomainEventDispatcher *_networkEventDispatcher;
    id <RWIProtocolPageDomainHandler> _pageHandler;
    RWIProtocolPageDomainEventDispatcher *_pageEventDispatcher;
}

@property(readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property(retain, nonatomic, setter=setPageHandler:) id <RWIProtocolPageDomainHandler> pageHandler;
@property(readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property(retain, nonatomic, setter=setNetworkHandler:) id <RWIProtocolNetworkDomainHandler> networkHandler;
@property(readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property(retain, nonatomic, setter=setDOMStorageHandler:) id <RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property(readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property(retain, nonatomic, setter=setDOMHandler:) id <RWIProtocolDOMDomainHandler> domHandler;
@property(readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property(readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property(retain, nonatomic, setter=setCSSHandler:) id <RWIProtocolCSSDomainHandler> cssHandler;
- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

