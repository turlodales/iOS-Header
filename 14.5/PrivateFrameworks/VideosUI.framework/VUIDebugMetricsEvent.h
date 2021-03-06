//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEvent : NSObject
{
    NSArray *_eventData;
    NSDictionary *_rawData;
    NSArray *_sortedPageKeys;
    NSArray *_sortedPrimaryKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedPrimaryKeys; // @synthesize sortedPrimaryKeys=_sortedPrimaryKeys;
@property(retain, nonatomic) NSArray *sortedPageKeys; // @synthesize sortedPageKeys=_sortedPageKeys;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) NSString *pageContext;
@property(readonly, nonatomic) NSString *eventType;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSDictionary *rawEvent;
- (id)_sortKeys:(id)arg1;
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;

@end

