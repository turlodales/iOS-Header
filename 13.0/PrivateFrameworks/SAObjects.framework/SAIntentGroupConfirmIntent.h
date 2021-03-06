//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand
{
}

+ (id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmIntent;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

