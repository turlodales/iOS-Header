//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject
{
}

+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voice;
@property(copy, nonatomic) NSString *voiceType;
@property(nonatomic) long long voiceContentVersion;
@property(copy, nonatomic) NSString *resourceMasteredVersion;
@property(nonatomic) long long resourceContentVersion;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *masteredVersion;
@property(copy, nonatomic) NSString *languageString;
@property(copy, nonatomic) NSString *gender;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

