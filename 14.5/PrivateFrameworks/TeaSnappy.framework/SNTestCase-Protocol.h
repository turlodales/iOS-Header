//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaSnappy/SNTestSetup-Protocol.h>

@class NSArray, NSString;

@protocol SNTestCase <SNTestSetup>
@property(readonly, nonatomic) unsigned long long aggregate;
@property(readonly, nonatomic) double timeoutInSeconds;
@property(readonly, copy, nonatomic) NSString *testName;

@optional
@property(readonly, nonatomic) NSArray *requiredCapabilities;
@end

