//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXBackgroundExitData, MXForegroundExitData;

@interface MXAppExitMetric : MXMetric
{
    MXForegroundExitData *_foregroundExitData;
    MXBackgroundExitData *_backgroundExitData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) MXBackgroundExitData *backgroundExitData; // @synthesize backgroundExitData=_backgroundExitData;
@property(readonly) MXForegroundExitData *foregroundExitData; // @synthesize foregroundExitData=_foregroundExitData;
- (id)toDictionary;
- (id)initWithForegroundExitData:(id)arg1 backgroundExitData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

