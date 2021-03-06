//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsDaemon/TPSAnalyticsProcessing-Protocol.h>

@class NSDate, NSString, TPSAnalyticsEventController, TPSDuetDataProvider;
@protocol TPSAnalyticsProcessorDataSource;

@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing>
{
    TPSAnalyticsEventController *_analyticsEventController;
    TPSDuetDataProvider *_duetDataProvider;
    NSString *_dateLastRunKey;
    id <TPSAnalyticsProcessorDataSource> _dataSource;
}

+ (id)loadValueForKey:(id)arg1 class:(Class)arg2;
+ (void)saveValue:(id)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TPSAnalyticsProcessorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)resetAnalytics;
- (void)setDuetDataProvider:(id)arg1;
- (void)processAnalytics:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSDate *dateLastRun;
@property(readonly, nonatomic) TPSDuetDataProvider *duetDataProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

