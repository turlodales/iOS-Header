//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WDClinicalSampleAccountProvider;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccount : NSObject
{
    NSDictionary *_properties;
    WDClinicalSampleAccountProvider *_provider;
    NSArray *_batches;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *batches; // @synthesize batches=_batches;
@property(retain, nonatomic) WDClinicalSampleAccountProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;

@end

