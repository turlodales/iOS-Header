//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ATXActionResponse, NSArray;

@protocol ATXActionPredictionInterface
- (void)sendFeedbackWithResponse:(ATXActionResponse *)arg1;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(NSArray *)arg1 candidateActionTypes:(NSArray *)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(void (^)(ATXActionResponse *, NSError *))arg6;
@end

