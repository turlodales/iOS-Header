//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject
{
    FMDEmergencyCallInfoPublisherConfiguration *_publisherConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig; // @synthesize publisherConfig=_publisherConfig;
- (void)publishInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

