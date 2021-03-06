//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Trial/TRIAllocationStatus.h>

@class NSArray, NSString;

@interface TRIExperimentAllocationStatus : TRIAllocationStatus
{
    int _deploymentId;
    NSString *_experimentId;
    NSString *_treatmentId;
    NSArray *_namespaces;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(readonly, nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property(readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToStatus:(id)arg1;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5 namespaces:(id)arg6;

@end

