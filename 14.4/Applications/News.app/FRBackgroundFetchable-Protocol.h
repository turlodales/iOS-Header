//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FCNewsAppConfiguration, FCOperationCanceling;

@protocol FRBackgroundFetchable <NSObject>
- (id <FCOperationCanceling>)backgroundFetchWithAppConfiguration:(id <FCNewsAppConfiguration>)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end

