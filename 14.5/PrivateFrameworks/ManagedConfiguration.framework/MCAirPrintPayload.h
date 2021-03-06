//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload
{
    unsigned long long _airPrintCount;
    NSMutableArray *_ippAddresses;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *ippAddresses; // @synthesize ippAddresses=_ippAddresses;
@property(nonatomic) unsigned long long airPrintCount; // @synthesize airPrintCount=_airPrintCount;
- (id)restrictions;
- (id)payloadDescriptionKeyValueSections;
- (id)verboseDescription;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

