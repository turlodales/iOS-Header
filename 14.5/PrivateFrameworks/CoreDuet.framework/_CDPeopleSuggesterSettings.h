//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying>
{
    _Bool _useFuture;
    _Bool _aggregateByIdentifier;
    _Bool _requireOutgoingInteraction;
    _Bool _useTitleToContrainKeywords;
    _Bool _inferActiveInteractions;
    unsigned long long _maxNumberOfPeopleSuggested;
    NSSet *_constrainMechanisms;
    NSSet *_constrainBundleIds;
    NSSet *_constrainAccounts;
    NSSet *_constrainDomainIdentifiers;
    NSSet *_constrainIdentifiers;
    NSSet *_constrainPersonIds;
    NSSet *_constrainPersonIdType;
    unsigned long long _constrainMaxRecipientCount;
    NSSet *_ignoreContactIdentifiers;
}

+ (id)defaultSettings;
- (void).cxx_destruct;
@property(retain) NSSet *ignoreContactIdentifiers; // @synthesize ignoreContactIdentifiers=_ignoreContactIdentifiers;
@property _Bool inferActiveInteractions; // @synthesize inferActiveInteractions=_inferActiveInteractions;
@property _Bool useTitleToContrainKeywords; // @synthesize useTitleToContrainKeywords=_useTitleToContrainKeywords;
@property _Bool requireOutgoingInteraction; // @synthesize requireOutgoingInteraction=_requireOutgoingInteraction;
@property _Bool aggregateByIdentifier; // @synthesize aggregateByIdentifier=_aggregateByIdentifier;
@property _Bool useFuture; // @synthesize useFuture=_useFuture;
@property unsigned long long constrainMaxRecipientCount; // @synthesize constrainMaxRecipientCount=_constrainMaxRecipientCount;
@property(retain) NSSet *constrainPersonIdType; // @synthesize constrainPersonIdType=_constrainPersonIdType;
@property(retain) NSSet *constrainPersonIds; // @synthesize constrainPersonIds=_constrainPersonIds;
@property(retain) NSSet *constrainIdentifiers; // @synthesize constrainIdentifiers=_constrainIdentifiers;
@property(retain) NSSet *constrainDomainIdentifiers; // @synthesize constrainDomainIdentifiers=_constrainDomainIdentifiers;
@property(retain) NSSet *constrainAccounts; // @synthesize constrainAccounts=_constrainAccounts;
@property(retain) NSSet *constrainBundleIds; // @synthesize constrainBundleIds=_constrainBundleIds;
@property(retain) NSSet *constrainMechanisms; // @synthesize constrainMechanisms=_constrainMechanisms;
@property unsigned long long maxNumberOfPeopleSuggested; // @synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

