//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PRSRankingItemCollection : NSObject
{
    NSArray *_arrayOfRankingItems;
    unsigned long long _countOfVisibleResults;
    NSString *_bundleIdentifier;
    NSDictionary *_mapResultIdToProtectionClass;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *mapResultIdToProtectionClass; // @synthesize mapResultIdToProtectionClass=_mapResultIdToProtectionClass;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property unsigned long long countOfVisibleResults; // @synthesize countOfVisibleResults=_countOfVisibleResults;
@property(retain) NSArray *arrayOfRankingItems; // @synthesize arrayOfRankingItems=_arrayOfRankingItems;
- (id)description;

@end

