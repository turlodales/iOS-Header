//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRequestBase.h>

#import <HomeKit/HMExecuteOperation-Protocol.h>

@class HMActionSet, NSString;

@interface HMExecuteRequest : HMRequestBase <HMExecuteOperation>
{
    HMActionSet *_actionSet;
}

+ (id)executeRequestWithActionSet:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithActionSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

