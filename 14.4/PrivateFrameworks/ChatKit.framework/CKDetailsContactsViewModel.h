//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

@interface CKDetailsContactsViewModel : NSObject
{
    _Bool _showsLocation;
    _Bool _showsMessageButton;
    _Bool _showsFaceTimeVideoButton;
    _Bool _showsPhoneButton;
    _Bool _showsScreenSharingButton;
    _Bool _isPendingRecipient;
    _Bool _verified;
    NSString *_preferredHandle;
    NSString *_entityName;
    NSString *_locationString;
    CNContact *_contact;
}

+ (id)descriptorForContactRequiredKeys;
- (void).cxx_destruct;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic) _Bool isPendingRecipient; // @synthesize isPendingRecipient=_isPendingRecipient;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool showsScreenSharingButton; // @synthesize showsScreenSharingButton=_showsScreenSharingButton;
@property(nonatomic) _Bool showsPhoneButton; // @synthesize showsPhoneButton=_showsPhoneButton;
@property(nonatomic) _Bool showsFaceTimeVideoButton; // @synthesize showsFaceTimeVideoButton=_showsFaceTimeVideoButton;
@property(nonatomic) _Bool showsMessageButton; // @synthesize showsMessageButton=_showsMessageButton;
@property(nonatomic) _Bool showsLocation; // @synthesize showsLocation=_showsLocation;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSString *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
- (id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(_Bool)arg4 showsMessageButton:(_Bool)arg5 showsFaceTimeVideoButton:(_Bool)arg6 showsPhoneButton:(_Bool)arg7 showsScreenSharingButton:(_Bool)arg8 contact:(id)arg9 isPendingRecipient:(_Bool)arg10 verified:(_Bool)arg11;

@end

