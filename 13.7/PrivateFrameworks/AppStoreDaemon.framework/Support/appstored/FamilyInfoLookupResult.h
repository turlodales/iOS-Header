//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FamilyInfoLookupResult : NSObject
{
    _Bool _cached;
    NSArray *_familyMembers;
}

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(readonly, nonatomic, getter=isCached) _Bool cached; // @synthesize cached=_cached;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(_Bool)arg2;

@end

