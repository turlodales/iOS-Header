//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VNRequest;

@interface VCPVideoProcessorNode : NSObject
{
    VNRequest *_request;
    unsigned long long _frameInterval;
    CDStruct_1b6d18a9 _timeInterval;
}

+ (id)nodeWithRequest:(id)arg1 andConfiguration:(id)arg2;
+ (_Bool)validateConfiguration:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) VNRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 andConfiguration:(id)arg2;

@end

