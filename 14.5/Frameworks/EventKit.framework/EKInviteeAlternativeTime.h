//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface EKInviteeAlternativeTime : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_conflictedParticipants;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3;

@end

