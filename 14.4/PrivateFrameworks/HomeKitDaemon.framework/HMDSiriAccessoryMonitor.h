//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;
    NSMapTable *_accessories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(_Bool)arg2;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;
- (void)_removeAccessory:(id)arg1;
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;
- (id)_accessoriesTargetingAccessory:(id)arg1;
- (_Bool)hasAnyActiveTargetingAccessories;
- (id)_getInfoForAccessory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

