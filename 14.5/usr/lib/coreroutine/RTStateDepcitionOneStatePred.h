//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, RTStateDepictionOnePredEl;

@interface RTStateDepcitionOneStatePred : NSObject
{
    RTStateDepictionOnePredEl *_weekly;
    RTStateDepictionOnePredEl *_daily;
    NSUUID *_stateUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *stateUUID; // @synthesize stateUUID=_stateUUID;
@property(retain, nonatomic) RTStateDepictionOnePredEl *daily; // @synthesize daily=_daily;
@property(retain, nonatomic) RTStateDepictionOnePredEl *weekly; // @synthesize weekly=_weekly;
- (id)init;

@end

