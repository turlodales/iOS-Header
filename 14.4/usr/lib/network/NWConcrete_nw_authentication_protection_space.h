//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_authentication_protection_space-Protocol.h>

@class NSString;
@protocol OS_nw_endpoint;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space>
{
    NSObject<OS_nw_endpoint> *endpoint;
    unsigned int is_proxy:1;
    unsigned int __pad_bits:7;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

