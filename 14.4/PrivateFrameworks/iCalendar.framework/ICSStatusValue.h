//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue
{
    NSString *_statusString;
}

+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusValueFromICSString:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

