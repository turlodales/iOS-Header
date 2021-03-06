//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPDLifetimeServicing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing>
{
    int _requestEffectivePID;
    NSString *_prettyDescription;
    CDUnknownBlockType _stopBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(retain) NSString *prettyDescription; // @synthesize prettyDescription=_prettyDescription;
@property int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
- (void)stopExtendingLifetime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

