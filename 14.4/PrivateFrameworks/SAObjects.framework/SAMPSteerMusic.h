//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPCollection, SAMPMediaItem;

@interface SAMPSteerMusic : SADomainCommand
{
}

+ (id)steerMusicWithDictionary:(id)arg1 context:(id)arg2;
+ (id)steerMusic;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *steerableBlob;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(retain, nonatomic) SAMPMediaItem *currentListeningToItem;
@property(retain, nonatomic) SAMPCollection *currentListeningToCollection;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

