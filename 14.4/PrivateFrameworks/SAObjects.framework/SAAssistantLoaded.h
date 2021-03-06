//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand
{
}

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantLoaded;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSArray *syncAnchors;
@property(copy, nonatomic) NSNumber *requestSync;
@property(copy, nonatomic) NSString *dataAnchor;
@property(copy, nonatomic) NSString *appleConnectSessionToken;
@property(copy, nonatomic) NSNumber *appleConnectSessionExpirationTimestamp;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

