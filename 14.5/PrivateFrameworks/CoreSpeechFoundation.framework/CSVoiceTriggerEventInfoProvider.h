//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_rtsTriggerInfo;
    unsigned long long _triggerNotifiedMachTime;
    NSString *_remoteDeviceId;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *remoteDeviceId; // @synthesize remoteDeviceId=_remoteDeviceId;
@property(nonatomic) unsigned long long triggerNotifiedMachTime; // @synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime;
@property(copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
@property(copy, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;

@end

