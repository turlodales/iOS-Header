//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject
{
    NSData *_iosDeviceToken;
    NSString *_gcmRegistrationId;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gcmRegistrationId; // @synthesize gcmRegistrationId=_gcmRegistrationId;
@property(retain, nonatomic) NSData *iosDeviceToken; // @synthesize iosDeviceToken=_iosDeviceToken;

@end

