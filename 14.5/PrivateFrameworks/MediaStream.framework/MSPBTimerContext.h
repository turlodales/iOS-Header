//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MSPBTimerContext : NSObject
{
    _Bool _isValid;
    NSDate *_date;
}

+ (id)contextWithDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (id)init;

@end

