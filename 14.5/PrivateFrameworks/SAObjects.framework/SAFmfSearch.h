//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAFmfSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocation *requestedLocation;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *friends;
@property(retain, nonatomic) SALocation *currentLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

