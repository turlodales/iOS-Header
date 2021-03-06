//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@class NSString, SXVideoComponent;
@protocol SXAnalyticsReporting;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>
{
    SXVideoComponent *_component;
    id <SXAnalyticsReporting> _analyticsReporting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(readonly, nonatomic) SXVideoComponent *component; // @synthesize component=_component;
- (void)reportEvent:(id)arg1;
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

