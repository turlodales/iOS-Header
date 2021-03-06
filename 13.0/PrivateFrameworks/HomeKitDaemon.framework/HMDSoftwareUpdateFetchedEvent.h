//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _userInitiated;
    _Bool _newUpdateFetched;
}

+ (id)eventWasUserInitiated:(_Bool)arg1 wasNewUpdateFetched:(_Bool)arg2;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic, getter=wasNewUpdateFetched) _Bool newUpdateFetched; // @synthesize newUpdateFetched=_newUpdateFetched;
@property(nonatomic, getter=wasUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

