//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDPairedSync, HMDWatchSync, NSMutableArray, NSString;

@interface HMDWatchSyncState : HMFObject
{
    NSMutableArray *_syncs;
    NSString *_deviceId;
    HMDPairedSync *_pairedSync;
}

+ (id)resultAsString:(unsigned long long)arg1;
+ (id)optionAsString:(unsigned long long)arg1;
+ (_Bool)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDPairedSync *pairedSync; // @synthesize pairedSync=_pairedSync;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)description;
- (void)dealloc;
- (_Bool)removeSync;
- (void)addNewSync:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) HMDWatchSync *currentSync;
- (id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2;

@end

