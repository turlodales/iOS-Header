//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRMultiSampleExporting-Protocol.h>

@class NSMutableArray, NSString;

@interface HAECGExporter : NSObject <SRMultiSampleExporting>
{
    struct unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs>> _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
    _Bool _fromRightWrist;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fromRightWrist; // @synthesize fromRightWrist=_fromRightWrist;
- (id)sr_dictionaryRepresentationWithSample:(id)arg1;
- (id)sr_endMultiSampleStream;
- (id)dumpCurrentWaveform;
- (void)sr_beginMultiSampleStream;
- (void)resetFilter;
- (void)handleRealtimeSamples:(const float *)arg1 count:(unsigned int)arg2 startTimestamp:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

