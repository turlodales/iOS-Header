//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject
{
}

+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMicroblogSearchResult;
@property(copy, nonatomic) NSURL *webAddress;
@property(retain, nonatomic) SADecoratedString *summary;
@property(copy, nonatomic) NSArray *resultUsers;
@property(copy, nonatomic) NSArray *resultPosts;
@property(copy, nonatomic) NSArray *resultNews;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

