//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ManagedCatalogWorkoutReference : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *contentRating; // @dynamic contentRating;
@property(nonatomic, retain) NSSet *contributorIdentifiers; // @dynamic contributorIdentifiers;
@property(nonatomic, copy) NSString *dateReleased; // @dynamic dateReleased;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) int episode; // @dynamic episode;
@property(nonatomic, retain) NSSet *equipmentIdentifiers; // @dynamic equipmentIdentifiers;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSString *mediaType; // @dynamic mediaType;
@property(nonatomic, copy) NSString *modalityIdentifier; // @dynamic modalityIdentifier;
@property(nonatomic, retain) NSSet *musicGenreIdentifiers; // @dynamic musicGenreIdentifiers;
@property(nonatomic, retain) NSSet *trainerIdentifiers; // @dynamic trainerIdentifiers;

@end

