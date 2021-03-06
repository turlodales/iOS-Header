//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_os_log;

@interface CLSRegionItemCacheCreator : NSObject
{
    _Bool _simulatesTimeout;
    NSObject<OS_os_log> *_loggingConnection;
    double _timeoutInterval;
    unsigned long long _numberOfRetries;
    NSArray *_queryPerformers;
}

+ (id)businessItemsForRegion:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *queryPerformers; // @synthesize queryPerformers=_queryPerformers;
@property(nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (_Bool)createCacheForRegions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)initWithQueryPerformers:(id)arg1;

@end

