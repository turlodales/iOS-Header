//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty
{
}

@property(retain, nonatomic) NSString *region;
@property(retain, nonatomic) NSString *language;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *feature;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

