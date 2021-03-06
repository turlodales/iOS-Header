//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCFeedTransforming-Protocol.h>

@class NSOrderedSet, NSString;
@protocol FCFeedTransforming;

@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming>
{
    NSOrderedSet *_mandatoryArticleIDs;
    NSOrderedSet *_personalizedArticleIDs;
    id <FCFeedTransforming> _sortTransformation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FCFeedTransforming> sortTransformation; // @synthesize sortTransformation=_sortTransformation;
@property(copy, nonatomic) NSOrderedSet *personalizedArticleIDs; // @synthesize personalizedArticleIDs=_personalizedArticleIDs;
@property(copy, nonatomic) NSOrderedSet *mandatoryArticleIDs; // @synthesize mandatoryArticleIDs=_mandatoryArticleIDs;
- (id)transformFeedItems:(id)arg1;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 sortTransformation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

