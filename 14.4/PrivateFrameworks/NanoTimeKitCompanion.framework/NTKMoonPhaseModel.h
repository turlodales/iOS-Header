//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSString;

@interface NTKMoonPhaseModel : NSObject
{
    NSDate *_entryDate;
    NSDate *_eventDate;
    CLLocation *_location;
    NSString *_phaseName;
    unsigned long long _phaseNumber;
    long long _hemisphere;
    long long _event;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) long long hemisphere; // @synthesize hemisphere=_hemisphere;
@property(readonly, nonatomic) unsigned long long phaseNumber; // @synthesize phaseNumber=_phaseNumber;
@property(readonly, nonatomic) NSString *phaseName; // @synthesize phaseName=_phaseName;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
- (id)initWithDate:(id)arg1 location:(id)arg2;

@end

