//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNCLastNewsStoryResult : NSObject
{
    NSString *_headlineIdentifier;
    NSString *_headlineTitle;
    NSString *_sectionName;
    NSString *_sectionIdentifier;
    NSString *_sourceName;
    NSString *_sourceIdentifier;
    NSString *_excerpt;
    unsigned long long _headlineIndex;
    unsigned long long _totalHeadlineCount;
    long long _family;
}

- (void).cxx_destruct;
@property(nonatomic) long long family; // @synthesize family=_family;
@property(nonatomic) unsigned long long totalHeadlineCount; // @synthesize totalHeadlineCount=_totalHeadlineCount;
@property(nonatomic) unsigned long long headlineIndex; // @synthesize headlineIndex=_headlineIndex;
@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(copy, nonatomic) NSString *headlineTitle; // @synthesize headlineTitle=_headlineTitle;
@property(copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

