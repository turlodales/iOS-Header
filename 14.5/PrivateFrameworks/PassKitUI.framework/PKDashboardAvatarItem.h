//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccountUser, PKFamilyMember;

@interface PKDashboardAvatarItem : NSObject <PKDashboardItem>
{
    PKFamilyMember *_familyMember;
    PKAccountUser *_accountUser;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(retain, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

