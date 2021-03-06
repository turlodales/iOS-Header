//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSString *_peopleUUID;
    NSSet *_personNodes;
    NSSet *_birthdayPersonUUIDs;
    long long _year;
    NSSet *_extraFeatures;
}

- (void).cxx_destruct;
@property(nonatomic) NSSet *extraFeatures; // @synthesize extraFeatures=_extraFeatures;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(retain, nonatomic) NSSet *birthdayPersonUUIDs; // @synthesize birthdayPersonUUIDs=_birthdayPersonUUIDs;
@property(retain, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(retain, nonatomic) NSString *peopleUUID; // @synthesize peopleUUID=_peopleUUID;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (_Bool)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (_Bool)semanticalDedupingEnabledForExtendedCuration;
- (unsigned long long)durationForExtendedCuration;
- (unsigned long long)durationForCuration;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

