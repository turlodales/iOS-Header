//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate>
{
    NSObject<OS_dispatch_queue> *workQueue;
    CBCentralManager *centralManager;
    NSMutableSet *delegates;
    long long state;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property long long state; // @synthesize state;
@property(retain, nonatomic) NSMutableSet *delegates; // @synthesize delegates;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
- (void)registerCentralManagerDelegate:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)_getCentralManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

