//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLTrainingStore;

@interface PMLMockPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    _Bool _returnValue;
    _Bool _didRun;
    NSString *_planId;
    unsigned long long _version;
}

+ (id)lastDeserializedPlansMap;
+ (void)clearLastDeserializedPlans;
+ (void)setLastDeserializedPlanWithId:(id)arg1 toPlan:(id)arg2;
+ (id)lastDeserializedPlanWithId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didRun; // @synthesize didRun=_didRun;
@property unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWithError:(id *)arg1;
- (id)initWithPlanId:(id)arg1 store:(id)arg2;
- (id)initWithPlanId:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 returningAfterRunning:(_Bool)arg3;
- (id)initWithPlanId:(id)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

