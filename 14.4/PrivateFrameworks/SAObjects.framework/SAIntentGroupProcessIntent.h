//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand
{
}

+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)processIntent;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool shouldRunHandleIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *intentSlotKeyPaths;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(nonatomic) _Bool allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

