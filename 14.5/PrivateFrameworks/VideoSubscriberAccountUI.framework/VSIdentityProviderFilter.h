//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject
{
    NSArray *_allIdentityProviders;
    NSArray *_supportedAccountProviderIDs;
    NSString *_searchQuery;
}

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(copy, nonatomic) NSArray *supportedAccountProviderIDs; // @synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs;
@property(copy, nonatomic) NSArray *allIdentityProviders; // @synthesize allIdentityProviders=_allIdentityProviders;
@property(readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
- (id)init;

@end

