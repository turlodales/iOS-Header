//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface BMItemMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) long long absoluteSupport; // @dynamic absoluteSupport;
@property(retain, nonatomic) NSSet *antecedentOfRules; // @dynamic antecedentOfRules;
@property(retain, nonatomic) NSSet *consequentOfRules; // @dynamic consequentOfRules;
@property(copy, nonatomic) NSString *normalizedValue; // @dynamic normalizedValue;
@property(copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;
@property(copy, nonatomic) NSString *uniformIdentifier; // @dynamic uniformIdentifier;

@end

