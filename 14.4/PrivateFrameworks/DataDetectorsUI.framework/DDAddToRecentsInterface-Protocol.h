//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DDScannerResult, NSDate, NSDictionary, NSNumber, NSString;

@protocol DDAddToRecentsInterface
- (void)addResultToRecents:(DDScannerResult *)arg1 eventDate:(NSDate *)arg2 subject:(NSString *)arg3 weight:(NSNumber *)arg4 metadata:(NSDictionary *)arg5 userInitiated:(_Bool)arg6 completionBlock:(void (^)(_Bool))arg7;
@end

