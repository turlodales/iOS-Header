//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientWriting-Protocol.h>

@class SRSensorWriter;

__attribute__((visibility("hidden")))
@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>
{
    SRSensorWriter *_writer;
}

+ (id)sensorWriterClientWithWriter:(id)arg1;
- (void).cxx_destruct;
@property __weak SRSensorWriter *writer; // @synthesize writer=_writer;
- (void)setMonitoring:(_Bool)arg1 withRequestedConfigurations:(id)arg2;
- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithWriter:(id)arg1;

@end

