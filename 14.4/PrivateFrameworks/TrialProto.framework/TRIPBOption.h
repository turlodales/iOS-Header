//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBAny;

@interface TRIPBOption : TRIPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TRIPBAny *value; // @dynamic value;

@end

