//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface _BKHIDEventDeliveryRoot : NSObject
{
    NSString *_identifier;
    NSArray *_dispatchingRules;
    NSSet *_resolutions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *resolutions; // @synthesize resolutions=_resolutions;
@property(retain, nonatomic) NSArray *dispatchingRules; // @synthesize dispatchingRules=_dispatchingRules;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end

