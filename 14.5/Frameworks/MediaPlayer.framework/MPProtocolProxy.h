//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSHashTable, Protocol;

@interface MPProtocolProxy : NSProxy
{
    Protocol *_protocol;
    NSHashTable *_objects;
}

+ (id)proxyForObjects:(id)arg1 protocol:(id)arg2;
+ (id)proxyForObject:(id)arg1 protocol:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

