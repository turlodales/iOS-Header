//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class HFItemBuilder, HMActionSet, NSString;
@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding;

@interface HFActionSetValueSource : NSObject <HFCharacteristicValueSource, HFMediaValueSource>
{
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;
    HMActionSet *_actionSet;
    id <HFActionSetValueSourceDelegate> _delegate;
}

+ (id)na_identity;
@property(nonatomic) __weak id <HFActionSetValueSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)_valueForCurrentStateCharacteristic:(id)arg1;
- (_Bool)_isCurrentStateCharacteristic:(id)arg1;
- (id)_targetValueForCharacteristic:(id)arg1;
- (id)_actionForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForProfile:(id)arg1;
- (id)_existingActionBuilderForCharacteristic:(id)arg1;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (_Bool)hasPendingWritesForRouteID:(id)arg1;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (void)mediaValueUpdated:(id)arg1 playbackState:(long long)arg2 playbackArchive:(id)arg3;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)initWithActionSet:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

