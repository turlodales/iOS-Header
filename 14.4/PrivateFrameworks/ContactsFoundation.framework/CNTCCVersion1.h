//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNTCC-Protocol.h>
#import <ContactsFoundation/CNTCCSettings-Protocol.h>
#import <ContactsFoundation/CNTCCSimulation-Protocol.h>

@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>
{
    NSNumber *_simulateStatus;
    NSNumber *_isUnitTestingOnSimulatorCachedValue;
}

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)arg1 bundleIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isUnitTestingOnSimulatorCachedValue; // @synthesize isUnitTestingOnSimulatorCachedValue=_isUnitTestingOnSimulatorCachedValue;
@property(retain, nonatomic) NSNumber *simulateStatus; // @synthesize simulateStatus=_simulateStatus;
- (id)checkIfUnitTesting;
- (_Bool)isUnitTesting;
- (void)stopSimulation;
- (void)simulateStatus:(long long)arg1;
- (void)saveAuthorizationRecord:(id)arg1;
- (id)authorizationRecordForBundleIdentifier:(id)arg1;
- (id)authorizationRecords;
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isAuthorizationRestricted;
- (long long)checkAuthorizationStatusOfAuditToken:(CDStruct_4c969caf)arg1;
- (long long)checkAuthorizationStatusOfCurrentProcess;

@end

