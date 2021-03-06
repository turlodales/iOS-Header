//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet, NSString;

@interface FCDraftIssuesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    NSString *_issueListID;
}

+ (id)groupEmitterIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
@property(readonly, nonatomic) _Bool shouldEmitContentInFavoritesOnlyMode;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (_Bool)wantsToInsertGroupInContext:(id)arg1;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithIssueListID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingleRefreshSessionGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) _Bool requiresHeavyweightContent;
@property(readonly) Class superclass;

@end

