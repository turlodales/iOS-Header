//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface HIDAnalyticsEvent : NSObject
{
    NSMutableDictionary *_fields;
    _Bool _isUpdated;
    _Bool _isLogged;
    NSString *_name;
    NSDictionary *_desc;
}

- (void).cxx_destruct;
@property _Bool isLogged; // @synthesize isLogged=_isLogged;
@property(retain) NSDictionary *desc; // @synthesize desc=_desc;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;
- (void)addField:(id)arg1;
- (id)description;
- (void)cancel;
- (void)activate;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;

@end

