//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol CKDZoneGatekeeperWaiter, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKWaiterWrapper : NSObject
{
    id <CKDZoneGatekeeperWaiter> _waiter;
    NSArray *_zoneIDs;
    NSObject<OS_os_activity> *_activity;
    CDUnknownBlockType _completionHandler;
    NSString *_personaID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(readonly, nonatomic) id <CKDZoneGatekeeperWaiter> waiter; // @synthesize waiter=_waiter;
- (id)CKPropertiesDescription;
- (id)description;
- (void)invokeCompletionHandler:(_Bool)arg1;
- (id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 activity:(id)arg4;

@end

