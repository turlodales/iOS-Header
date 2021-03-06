//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject
{
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
    NSString *_bundleIdentifier;
}

+ (id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;

@end

