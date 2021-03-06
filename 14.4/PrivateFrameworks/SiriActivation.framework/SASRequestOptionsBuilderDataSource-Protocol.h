//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SASRequestOptionsBuilderDataSourceForTesting-Protocol.h>

@class NSString, SASActivationRequest, SASRequestOptionsBuilder;

@protocol SASRequestOptionsBuilderDataSource <SASRequestOptionsBuilderDataSourceForTesting>
- (unsigned long long)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 currentLockStateForActivation:(SASActivationRequest *)arg2;
- (NSString *)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 uiPresentationIdentifierWithActivation:(SASActivationRequest *)arg2 activationPresentation:(long long)arg3;
- (_Bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(SASActivationRequest *)arg2;
- (_Bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isAcousticIdAllowedWithActiviation:(SASActivationRequest *)arg2;
- (_Bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isPredictedRecordRouteIsZLLWithActiviation:(SASActivationRequest *)arg2;
- (_Bool)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isRequestInitialWithActiviation:(SASActivationRequest *)arg2;
@end

