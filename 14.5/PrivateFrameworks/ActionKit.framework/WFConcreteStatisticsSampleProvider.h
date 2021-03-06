//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <ActionKit/WFStatisticsSampleProvider-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol WFStatisticsSampleProvider;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider>
{
    NSObject<WFStatisticsSampleProvider> *_sampleProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider; // @synthesize sampleProvider=_sampleProvider;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSampleProvider:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool canProvideDataSamples; // @dynamic canProvideDataSamples;
@property(readonly, nonatomic) NSArray *dataSamples; // @dynamic dataSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

