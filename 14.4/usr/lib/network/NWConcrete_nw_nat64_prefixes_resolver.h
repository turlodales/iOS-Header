//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_nat64_prefixes_resolver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_context, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver>
{
    struct os_unfair_lock_s lock;
    unsigned int ifindex;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t *dns_service;
    int dns_error;
    CDUnknownBlockType update_handler;
    CDUnknownBlockType cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    struct in6_addr *ipv6_addrs;
    NSObject<OS_nw_path_evaluator> *evaluator;
    int address_count;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

