//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet *_mutableAuthors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *mutableAuthors; // @synthesize mutableAuthors=_mutableAuthors;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)currentAuthorColorWithKey:(id)arg1;
- (long long)indexForColorKey:(id)arg1 usedColors:(id)arg2;
- (_Bool)p_withToleranceDoesColorSet:(id)arg1 containColor:(id)arg2;
- (long long)p_hashCodeForColorKey:(id)arg1;
- (id)nextAuthorColor;
- (id)authorInStorageAddingAuthorIfNecessary:(id)arg1;
- (id)authorInStorageMatchingAuthor:(id)arg1;
- (id)preferredAuthorMatchingPrivateID:(id)arg1 name:(id)arg2;
- (id)authorsMatchingPrivateID:(id)arg1;
@property(readonly) NSSet *authors;
- (void)removeAuthor:(id)arg1;
- (void)addAuthor:(id)arg1;

@end

