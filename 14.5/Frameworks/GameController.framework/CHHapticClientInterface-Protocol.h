//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;

@protocol CHHapticClientInterface
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)clientCompletedWithError:(NSError *)arg1;
- (void)sequenceFinished:(unsigned long long)arg1 error:(NSError *)arg2;
@end

