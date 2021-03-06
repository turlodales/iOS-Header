//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@class NSSet;
@protocol STStatusDomainData, STStatusDomainDataDiff;

@protocol STStatusDomainPublisherXPCServer <NSObject>
- (void)publishDiff:(id <STStatusDomainDataDiff>)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(_Bool)arg3 reply:(void (^)(void))arg4;
- (void)publishData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(_Bool)arg3 reply:(void (^)(void))arg4;
- (void)unregisterFromPublishingDomains:(NSSet *)arg1;
- (void)registerToPublishDomains:(NSSet *)arg1;
@end

