//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriKitFlow/JSExport-Protocol.h>
#import <SiriKitFlow/NSObject-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(nonatomic, copy) NSArray *attachments;
@property(nonatomic) long long effect;
@property(nonatomic, copy) INPerson *sender;
@property(nonatomic, copy) NSString *serviceName;
@property(nonatomic, copy) NSString *conversationIdentifier;
@property(nonatomic, copy) INSpeakableString *speakableGroupName;
@property(nonatomic, copy) NSString *content;
@property(nonatomic) long long outgoingMessageType;
@property(nonatomic, copy) NSArray *recipients;
- (id)init;
@end

