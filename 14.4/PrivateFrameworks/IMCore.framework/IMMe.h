//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, IMHandle, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject
{
    CNContact *_cnContact;
    NSString *_cnNickname;
    NSString *_cnFirstName;
    NSString *_cnFullName;
    NSString *_cnLastName;
    NSArray *_cnEmails;
    NSMutableArray *_cnIMHandles;
    NSMutableArray *_loginIMHandles;
}

+ (id)imHandleForService:(id)arg1;
+ (id)me;
+ (id)lastNameFromFallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)fallbackUserName;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *cnContact; // @synthesize cnContact=_cnContact;
- (id)description;
- (void)myPictureChanged;
@property(readonly, nonatomic) NSArray *imHandles;
@property(readonly, nonatomic) IMHandle *bestIMHandle;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSArray *emails;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *nickname;
- (_Bool)removeIMHandle:(id)arg1;
- (_Bool)isIMHandleLoginIMHandle:(id)arg1;
- (_Bool)addIMHandle:(id)arg1;
- (id)loginIMHandles;
- (_Bool)removeLoginIMHandle:(id)arg1;
- (_Bool)addLoginIMHandle:(id)arg1;
- (void)setCNContact:(id)arg1;
- (void)resetABPerson;
- (void)rebuildIMHandles;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
@property(readonly, nonatomic) NSString *guid;
- (id)init;

@end

