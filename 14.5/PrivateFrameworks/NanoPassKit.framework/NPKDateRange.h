//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKDateRange-Protocol.h>

@class NSDate, NSString;

@interface NPKDateRange : NSObject <NPKDateRange>
{
    NSDate *_startDate;
    NSString *_startDateString;
    NSDate *_expiryDate;
    NSString *_expiryDateString;
}

+ (id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *expiryDateString; // @synthesize expiryDateString=_expiryDateString;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *startDateString; // @synthesize startDateString=_startDateString;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 expirationDate:(id)arg2 formatterStyle:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

