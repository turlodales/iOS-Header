//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDOctagonTrustProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>
{
    CDPContext *_cdpContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (id)fetchAllEscrowRecords:(id)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (id)fetchEscrowRecords:(id)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

