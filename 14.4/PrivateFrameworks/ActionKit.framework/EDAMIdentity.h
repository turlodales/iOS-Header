//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMContact, NSNumber;

@interface EDAMIdentity : FATObject
{
    NSNumber *_id;
    EDAMContact *_contact;
    NSNumber *_userId;
    NSNumber *_deactivated;
    NSNumber *_sameBusiness;
    NSNumber *_blocked;
    NSNumber *_userConnected;
    NSNumber *_eventId;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSNumber *userConnected; // @synthesize userConnected=_userConnected;
@property(retain, nonatomic) NSNumber *blocked; // @synthesize blocked=_blocked;
@property(retain, nonatomic) NSNumber *sameBusiness; // @synthesize sameBusiness=_sameBusiness;
@property(retain, nonatomic) NSNumber *deactivated; // @synthesize deactivated=_deactivated;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) EDAMContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

