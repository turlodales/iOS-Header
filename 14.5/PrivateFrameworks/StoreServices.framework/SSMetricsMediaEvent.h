//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent
{
}

@property(retain, nonatomic) NSString *mediaURL;
@property(retain, nonatomic) NSString *mediaEventType;
- (void)setLocationWithEventLocations:(id)arg1;
@property(retain, nonatomic) NSString *locationDescription;
@property(retain, nonatomic) NSNumber *itemIdentifier;
- (id)init;

@end

