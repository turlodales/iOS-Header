//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface PGMoodGenerationContext : NSObject
{
    NSMutableDictionary *_isLongTimeNoSeeByPersonLocalIdentifier;
    NSMutableDictionary *_isLongTimeNoSeeBySocialGroupUUID;
    NSMutableDictionary *_isLongTimeNoSeeByLocationUUID;
    NSDate *_longTimeNoSeePeopleLatestDate;
    NSDate *_longTimeNoSeeLocationLatestDate;
}

- (void).cxx_destruct;
- (_Bool)locationIsLongTimeNoSeeWithLocationNode:(id)arg1;
- (_Bool)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)arg1;
- (_Bool)personIsLongTimeNoSeeWithPersonNode:(id)arg1;
- (_Bool)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)arg1;
- (_Bool)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)arg1;
- (id)initWithReferenceDate:(id)arg1;

@end

