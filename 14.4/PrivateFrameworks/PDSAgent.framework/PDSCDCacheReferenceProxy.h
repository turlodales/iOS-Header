//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSPersistentContainer, PDSCDCacheContainer;

__attribute__((visibility("hidden")))
@interface PDSCDCacheReferenceProxy : NSProxy
{
    PDSCDCacheContainer *_cacheContainer;
    NSPersistentContainer *_persistentContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) PDSCDCacheContainer *cacheContainer; // @synthesize cacheContainer=_cacheContainer;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithCacheContainer:(id)arg1 persistentContainer:(id)arg2;

@end

